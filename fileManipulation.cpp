#include <iostream>
#include <fstream>
using namespace std;

void saveGame() {
    int health = 100;
    int money = 125;
    string name = "butthead";

    
    string input = "";
    input += "<character>\n\t<health>" + to_string(health) + "</health>\n" + "\t<money>" + to_string(money) + "</money>\n" + "\t<name>" + name + "</name>\n</character>";
    ofstream fout("saveFile.txt");
    fout << input << "\n";
    fout.close();
}
void loadGame(){
    string name = "";
    int money = 0;
    int uglyPoints = 0;
    int health = 0;
    int friends = 0;
    ifstream fin("savefile2.save");
    fin >> name >> money >> uglyPoints >> health >> friends;
    cout << " " << name << " " << money << " " << uglyPoints << " " << health << " " << friends;
}
int main(){
    saveGame();
    loadGame();
    cout <<endl;
    return 0;
}