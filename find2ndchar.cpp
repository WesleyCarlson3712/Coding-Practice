/*
    Finds the index of the second occurrence of a given char in a string.
*/

#include <iostream>
#include <vector>
using namespace std;

int thingie(char letter, string word) {
    int number = 0;
    for(int i = 0; i < word.length(); i++) {
        if(word[i] == letter){
            number++;
            if(number == 2){
                return i;            
            }
        }
    }
    return 0;
}

// -------------------------------------------------------------------------------------------------

bool unitTest(){
    vector<char> letter {'w','e','p','s'};
    vector<string> word {"farts", "pee", "poop", "soupe"};
    vector<int> expected {0,2,3,0};

    for(int i = 0; i < expected.size(); i++){
        if(!thingie(letter[i],word[i]) == expected[i]) {
            cout << "failed on imputs " << letter[i] << ", " << word[i] << "." << endl;
            return false;
        }
    }

    return true;
}

// -------------------------------------------------------------------------------------------------

int main(){
    cout << unitTest() << endl;
    return 0;
}
