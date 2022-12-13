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

bool unitTest2(){
    vector<char> letter {'w','e','p','s'};
    vector<string> word {"farts", "pee", "poop", "soupe"};
    vector<int> expected {0,2,3,0};
    for(int i = 0; i < expected.size(); i++){
        int output = thingie(letter[i],word[i]);
        if(output != expected[i]) {
            cout << "Unit test for find2ndchar failed.\n\tInputs: " << letter[i] << ", " << word[i] << "\n\tOutput: " 
                 << output << "\n\tExpected output: " << expected[i] << "\n\n";
            return false;
        }
    }

    return true;
}

// -------------------------------------------------------------------------------------------------

// int main(){
//     cout << unitTest() << endl;
//     return 0;
// }
