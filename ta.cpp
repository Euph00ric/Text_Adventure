#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// Klasse Raum: jeder Raum hat einen Namen.
class Raum {
public:
    string name;
    Raum(string n) { name = n; }   // Konstruktor: setzt den Namen
};

int main(){
    srand(time(0));

    // 2D-Feld aus Raum-Objekten: 3 Etagen, 4 Raeume = 12 Raeume.
    Raum haus[3][4] = {
        { Raum("Bad"), Raum("Schlafzimmer"), Raum("Kinderzimmer"), Raum("Flur OG") },
        { Raum("Wohnzimmer"), Raum("Esszimmer"), Raum("Kochnische"), Raum("Treppenhaus") },
        { Raum("Ausgang"), Raum("Keller"), Raum("Werkstatt"), Raum("Garage") }
    };

    int x = 0, y = 3;   // Start: Flur OG (oben rechts)
    string eingabe;
    cout << "\n=== DAS HAUS ===\nFinde den Ausgang! (n, s, o, w, quit)\n";

    while (true){
        cout << "\nDu bist im " << haus[x][y].name << ".\n";
        if (rand() % 3 == 0) cout << ">>> Ein kalter Schauer! <<<\n";   // Zufallsereignis

        if (haus[x][y].name == "Ausgang"){ cout << "Geschafft!\n"; break; }

        cout << "Wohin? > ";
        cin >> eingabe;
        if (eingabe == "quit") break;

        if (eingabe == "n" && x > 0) x--;        // hoch
        else if (eingabe == "s" && x < 2) x++;   // runter
        else if (eingabe == "o" && y < 3) y++;   // rechts
        else if (eingabe == "w" && y > 0) y--;   // links
        else cout << "Da geht es nicht weiter!\n";
    }
    return 0;
}
