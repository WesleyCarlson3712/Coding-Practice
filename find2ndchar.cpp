/***************************************************************************************************
* Description:
*   Finds the index of the second occurrence of a given char in a string.
* Author:
*   Wesley
***************************************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

int thingie(char letter, string word) {
    int number = 0;
    for(int i = 0; i < word.length(); i++) {
        if(word[i] == letter) {
            number++;
            if(number == 2) {
                return i;            
            }
        }
    }
    return 0;
}