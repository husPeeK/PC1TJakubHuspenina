// Huspeninaprojekt.cpp: Definuje vstupní bod pro aplikaci.
//

#include "Huspeninaprojekt.h"

using namespace std;

int main() {
    
    float time, distance;
    const float speed_of_sound = 340.0;  

    
    cout << "Zadejte cas v sekundach, za ktery se ozval hrom po blesku: ";
    if (!(cin >> time)) {
        cout << "Neplatny vstup! Prosim, zadejte cislo." << endl;
        return 1;
    }

   
    distance = time * speed_of_sound;

    cout << "Blesk uhodil cca " << distance << " metru od vas." << endl;

    return 0;
}