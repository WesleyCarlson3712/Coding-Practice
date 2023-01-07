#include <iostream>
using namespace std;

class Character {
public:
    Character(){

        cout << "i am calling my default constructor\n";
    }
    Character(string name, int health, int braincells){
        this->name = name;
        this->health = health;
        this->braincells = braincells;

        
    }

    string name;
    int braincells;

    unsigned int getHealth(){return health;}
    
    void setHealth(int change){
        if(abs(change) > health && change < 0)
            health = 0;
        else
            health += change;
    }

private:
    unsigned int health = 0;
};

int main() {
    Character human("BUTTOX", 1234, -2000);
    Character tortoise("walking rock", 555, 100);
    Character cat;
    human.setHealth(-75);

    cout << human.getHealth() << endl;
    // cout << "the human only has " << human.braincells << " braincells. He is very dumb.\n";
    return 0;
}