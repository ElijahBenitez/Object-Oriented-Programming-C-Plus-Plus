#include <iostream>
#include <iomanip>
#include <string>
#include "RPG.h"
using namespace std;

void displayStats(RPG player1, RPG player2){
    printf("%s Health: %i   %s Health: %i\n", player1.getName().c_str(), player1.getHealth(),player2.getName().c_str(), player2.getHealth() );

}

void displayEnd(RPG player1, RPG player2){
    if (player1.isAlive() & !(player2.isAlive())) {
        printf("%s defeated %s, Good Game!\n", player1.getName().c_str(), player2.getName().c_str());
    }
    if (player2.isAlive() & !(player1.isAlive())) {
        printf("%s defeated %s, Good Game!\n", player2.getName().c_str(), player1.getName().c_str());
    }
}

void gameLoop(RPG * player1, RPG * player2){
    while (player1->isAlive() && player2->isAlive()){
        displayStats(*player1,*player2);
        printf("%s Turn:\n",(*player1).getName().c_str());
        (*player1).useSkill(player2);
        printf("----------------------\n");
        printf("%s Turn:\n",player2->getName().c_str());
        (*player2).useSkill(player1);
        printf("----------------------\n");
    }
}

int main(){
    RPG p1 = RPG("Wiz", 70,45,10,"mage");
    RPG p2 = RPG();
    p1.setSkills();
    p2.setSkills();
    gameLoop(&p1, &p2);
    displayEnd(p1, p2);
    return 0;

}