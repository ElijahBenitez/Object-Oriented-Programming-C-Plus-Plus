#include <iostream>
#include "RPG.h"
using namespace std;

RPG::RPG() {
    name = "N/A";
    health = 100;
    strength = 15;
    defense = 50;
    type = "N/A";
}

RPG::RPG(string name, int health, int strength, int defense, string type) {
    this->name=name;
    this->health=health;
    this->strength=strength;
    this->defense=defense;
    this->type=type;
}

int RPG::getDefense() const {
    return defense;
}
int RPG::getHealth() const {
    return health;
}
string RPG::getName() const {
    return name;
}
int RPG::getStrength() const {
    return strength;
}
void RPG::setSkills(){
    if (type=="mage"){
        skills[0] = "fire";
        skills[1] = "thunder";
    } else if (type=="thief"){
        skills[0] = "pilfer";
        skills[1] = "jab";
    } else if (type=="archer"){
        skills[0] = "parry";
        skills[1] = "crossbow_attack";
    } else {
        skills[0] = "slash";
        skills[1] = "parry";
    }
}

void RPG::printAction(string skill, RPG opponent){
    printf("%s used %s on %s\n", name.c_str(), skill.c_str(),opponent.getName().c_str());
}

void RPG::updateHealth(int newHealth){
    health = newHealth;
}

bool RPG::isAlive() const{
    if(health > 0){
        return true;
    } else {
        return false;
    }
}

void RPG::attack(RPG * opponent){
    int dmg = strength-(*opponent).getDefense();
    dmg = (abs(dmg)+dmg)/2;
    (*opponent).updateHealth((*opponent).getHealth()-dmg);
}

void RPG::useSkill(RPG * opponent){
    for (int i =0; i<2;i++){
        //printf("Skill %i: %s\n",i,skills[i].c_str());
        cout << "Skill " << i << ": " << skills[i].c_str() << "\n";
    }
    int chosenSkillIndex;
    printf("Choose A Skill To Use: Type 0 or 1\n");
    cin >> chosenSkillIndex;
    string chosen_skill = skills[chosenSkillIndex];
    printAction(chosen_skill, *opponent);
    attack(opponent);
}