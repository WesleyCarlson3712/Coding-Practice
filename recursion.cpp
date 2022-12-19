#include <iostream>
#include <vector>
using namespace std;

//--------------------------------------------------------------------------------------------------

int recursive(int number, vector<string> words){
    cout << words[number] << ", ";
    if(number < words.size() - 1)
        number = recursive(number+1,words);
    return number;
}

//--------------------------------------------------------------------------------------------------

int main(){
    vector<string> input = {"red", "orange", "murple", "blellow"};
    recursive(0,input);
    cout << endl;
    return 0;
}