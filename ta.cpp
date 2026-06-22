#include <iostream>
#include <string>

using namespace std;

int main(){
    string map [3][4] = {
        {"Schlafzimmer", "Flur OG", "Bad", "Kinderzimmer"},
        {"Wohnzimmer", "Treppenhaus", "Kueche", "Esszimmer"},
        {"Keller", "Werkstatt", "Garage", "Ausgang"}
    };

    int x = 0;
    int y = 0;

    string eingabe;
    
    while (true){
        cout << "\nDu bist im "<<map[x][y]<<endl;
        cout << "\nEingaben: n, s, o, w, quit\n >";
        cin >> eingabe;
        
        if (eingabe=="quit"){
            break;
        }
        if (eingabe=="n"&&y>0){
            y--;
        }
        else if (eingabe=="s"&&y<3){
            y++;
        }
        else if(eingabe=="o"&&x<4){
            x++;
        }
        else if(eingabe=="w"&&x>0){
            x--;
        }
        else{
            cout << "Hier gehts nicht weiter"<< endl;
        }
        if (map[x][y] == "Ausgang") {
            cout << "\nDu hast den Ausgang gefunden und gewonnen!\n";
            break;
        }
    }
        return 0;
        
        
    

}
