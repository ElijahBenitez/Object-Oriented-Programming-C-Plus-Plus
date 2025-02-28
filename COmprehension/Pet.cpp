// Pet . cpp
# include "Pet.h"

Pet::Pet(){
    name="";
    age=-1;
    owner="";
    is_house_trained = false;
}

Pet::Pet(string name, int a, string owner, bool is_house_trained){
    this->name= name;
    age = a;
    this->owner = owner;
    this->is_house_trained = is_house_trained;
}
void Pet::updateName ( string new_name ){
    name = new_name ;
}
void Pet::updateAge (  ){
    age += 1 ;
}
void Pet::updateOwner ( string new_owner ){
    owner = new_owner;
}
void Pet::set_House_Trained ( ){
    is_house_trained = 1;
}
string Pet::getName(){
    return name;
}