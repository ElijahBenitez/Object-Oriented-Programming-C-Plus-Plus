#include <iostream>
#include <iomanip>
#include <string>
#include "RPG.h"
using namespace std;

int main(){
    RPG RPGdef;
    RPG RPGovr("NPC", 100, 10, 10, "warrior");

    cout << "Default Constructor:" << endl;
    cout << "Name: " << RPGdef.getName()<< endl;
    cout << "Health: " << RPGdef.getHealth()<< endl;
    cout << "Strength: " << RPGdef.getStrength()<< endl;
    cout << "Defense: " << RPGdef.getDefense()<< endl;
    cout << "Overloaded Constructor:" << endl;
    cout << "Name: " << RPGovr.getName()<< endl;
    cout << "Health: " << RPGovr.getHealth()<< endl;
    cout << "Strength: " << RPGovr.getStrength()<< endl;
    cout << "Defense: " << RPGovr.getDefense()<< endl;
    
    cout << "NPC is alive?: " << RPGovr.isAlive() << endl;
    RPGovr.updateHealth(0);
    cout << "NPC health becomes 0, checking if alive: "<< RPGovr.isAlive() << endl;

}