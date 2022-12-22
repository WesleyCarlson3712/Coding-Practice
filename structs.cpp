#include <iostream>
using namespace std;

// -------------------------------------------------------------------------------------------------

int getInt(int min, int max){
    int number = 0;
    bool invalid = false;

    do{
        cin >> number;
        invalid = (number < min || number > max || cin.fail());

        if(invalid) {
            cout << "dont be stupid, stupid head" <<endl;
            cin.clear();
            cin.ignore(10000,'\n');
        }

    } while(invalid);

    return number;
}

// -------------------------------------------------------------------------------------------------

struct Gem {
    string name = "";
    int damageBoost = 0;
};

// -------------------------------------------------------------------------------------------------

struct Weapon {
    string name = "";
    int damage = 0;
    Gem gem;
};

// -------------------------------------------------------------------------------------------------

struct Character {
    string name = "";
    int health = 0;
    Weapon weapon;
};

// -------------------------------------------------------------------------------------------------

void printDamage(Character attacker, Character victim){
    cout << attacker.name << " attacks " << victim.name << " with " << attacker.weapon.name 
         << " and does " << attacker.weapon.damage << " damage. " << victim.name << " has " 
         << victim.health << " left\n";
}

// -------------------------------------------------------------------------------------------------

Character fight(Character attacker, Character victim) {
    victim.health -= attacker.weapon.damage;
    return victim;
}

// -------------------------------------------------------------------------------------------------

int main() {


    Character hero;
    hero.health = 100;
    hero.name = "BUTTOX";
    hero.weapon.name = "slicy thingie";
    hero.weapon.gem.name = "Currsed ruby";
    hero.weapon.gem.damageBoost = -20;
    hero.weapon.damage = 50 + hero.weapon.gem.damageBoost;
    


    Character monster;
    monster.health = 150;
    monster.name = "florp flap";
    monster.weapon.name = "useless little twig";
    monster.weapon.gem.name = "pretty rock";
    monster.weapon.gem.damageBoost = 15;
    monster.weapon.damage = 25 + monster.weapon.gem.damageBoost;
    


    while(hero.health > 0 && monster.health > 0){
        cout << "\tWhat do you want to do?\n\t1. Fight\n\t2. Nothing\n\t>>";
        if(getInt(1,2) == 1){
            monster = fight(hero, monster);
            printDamage(hero, monster);
        }
        hero = fight(monster, hero);
        printDamage(monster, hero);
        cout <<endl;
    }
    return 0;
}