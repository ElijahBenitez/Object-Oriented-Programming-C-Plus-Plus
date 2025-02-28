// Pet .h
# ifndef PET_H
# define PET_H

# include < string >
using namespace std ;


class Pet {
    // --------------- Constructors ---------------
    Pet () ;
    Pet ( string name , int age , string owner , bool is_house_trained );
    // --------------- Mutator Functions ---------------
    void updateName ( string new_name );
    void updateAge ();
    void updateOwner ( string new_owner );
    void set_House_Trained ( ) ;
    // --------------- Accessor Functions ---------------
    string getName ()  ;
    int getAge ()  ;
    string getOwner ()  ;
    bool getIs_House_Trained ()  ;
    bool isOlderThan ( Pet b )  ;

    private :
        string name ;
        int age ;
        string owner ;
        bool is_house_trained ;
};
# endif