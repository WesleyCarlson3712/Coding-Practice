#include "addDigits.cpp"
#include "find2ndchar.cpp"
#include "oddOrEven.cpp"

bool unitTest1(){
    vector<int> input = {1234,5678,90,0};
    vector<int> expectedOutput = {1,8,9,0};
    for(int i = 0; i < input.size(); i++){
        int output = reduceNumber(input[i]);
        if(output != expectedOutput[i]){
            cout << "Unit test for addDigits failed.\n\tInput: " << input[i] << "\n\tOutput: " 
                 << output << "\n\tExpected output: " << expectedOutput[i] << "\n\n";
            return false;
        }
    }

    return true;
}

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


bool unitTest3(){
    vector<int> input = {1111, 1234, 2244, 13579};
    vector<string> expectedOutput = {"odd", "mixed", "even", "odd"};
    for(int i = 0; i < input.size(); i++){
        string output = oddOrEven(input[i]);
        if(output != expectedOutput[i]){
            cout << "Unit test for oddOrEven failed.\n\tInput: " << input[i] << "\n\tOutput: " 
                 << output << "\n\tExpected output: " << expectedOutput[i] << "\n\n";
            return false;
        }
    }
    return true;
}

