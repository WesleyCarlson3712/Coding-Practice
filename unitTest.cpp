/***************************************************************************************************
* Description:
*   The unit test file is where all unit tests are written and stored. 
* Author:
*   Wesley
***************************************************************************************************/
#include "addDigits.cpp"
#include "find2ndchar.cpp"
#include "oddOrEven.cpp"
#include "firstDuplicate.cpp"
#include "findCommonInts.cpp"

bool unitTest1() {

    vector<int> input = {1234,5678,90,0};
    vector<int> expectedOutput = {1,8,9,0};

    for(int i = 0; i < input.size(); i++) {
        int output = reduceNumber(input[i]);
        if(output != expectedOutput[i]) {
            cout << "Unit test for addDigits failed.\n\tInput: " << input[i] << "\n\tOutput: " 
                 << output << "\n\tExpected output: " << expectedOutput[i] << "\n\n";
            return false;
        }
    }

    return true;
}

// -------------------------------------------------------------------------------------------------

bool unitTest2() {

    vector<char> letter {'w', 'e', 'p', 's'};
    vector<string> word {"farts", "pee", "poop", "soupe"};
    vector<int> expected {0, 2, 3, 0};

    for(int i = 0; i < expected.size(); i++) {
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

bool unitTest3() {

    vector<int> input = {1111, 1234, 2244, 13579};
    vector<string> expectedOutput = {"odd", "mixed", "even", "odd"};

    for(int i = 0; i < input.size(); i++) {
        string output = oddOrEven(input[i]);
        if(output != expectedOutput[i]) {
            cout << "Unit test for oddOrEven failed.\n\tInput: " << input[i] << "\n\tOutput: " 
                 << output << "\n\tExpected output: " << expectedOutput[i] << "\n\n";
            return false;
        }
    }

    return true;
}

// -------------------------------------------------------------------------------------------------

bool unitTest4() {

    vector<int> expectedOutput = {5, 8, -1, -1, 3, 235};
    vector<vector<int>> input = {
        {5, 1, 3, 5, 1, 2, 2},
        {8, 8, 9, 8, 7, 4, 2},
        {},
        {1, 2, 3, 4, 5, 6, 7, 8, 9 , 0},
        {6, 3, 7, 3, 6, -7, -6, 4, 5},
        {2354, 5423, 0, 2222322, 2312, 5463456, 62356, 235, 467356, 72345, 612346, 2475, 235}
    };

    for(int i = 0; i < input.size(); i++) {

        int output = firstDuplicate(input[i]);
        
        if(output != expectedOutput[i]) {
            cout << "Unit test for FirstDuplicate failed.\n\tInput: {";

            for(int j = 0; j < input[i].size(); j++) {
                cout << input[i][j];
                if(j != input[i].size() - 1) 
                    cout << ", ";
            }

            cout << "}\n\tOutput: "<< output << "\n\tExpected output: " << expectedOutput[i] << "\n\n";
            return false;
        }
    }

    return true;
}

// -------------------------------------------------------------------------------------------------

bool unitTest5() {
    vector<vector<int>> input1 {
        {1, 3, 5, 4, 8},  
        {-3, 9, 0, -5},
        {12, 58,},
        {111, 222, 33, 444, 333, 222, 111},
        {},
        {0},
        {1, 1, 1, 1, 1}
    };
    vector<vector<int>> input2 {
        {3,6,9,7,2},
        {-3,9,0,45},
        {0,-12},
        {333, 555, 111, 222, 111, 999},
        {5, 4, 3, 2, 1},
        {0},
        {1, 1, 1, 1, 1}
    };
    vector<vector<int>> expected {
        {3},
        {-3, 9, 0},
        {},
        {111, 222, 333, 222, 111},
        {},
        {0},
        {1, 1, 1, 1, 1}
    };

    for(int i = 0; i < expected.size(); i++) {
        vector<int> output = getCommonInts(input1[i], input2[i]);
        if(output != expected[i]) {
            cout << "Unit test for find2ndchar failed.\n\tInputs: {"; 
            
            for(int j = 0; j < input1[i].size(); j++) {
                cout << input1[i][j] << " ";
            }
            cout<< "} {";
            for(int j = 0; j < input2[j].size(); j++) {
                cout << input2[i][j] << " ";
            }
            cout << "}\n\tOutput: " << output[i] << "\n\tExpected output: ";
            for(int j = 0; j < expected[i].size(); j++) {
                cout << expected[i][j] << " ";
            }
            
            cout << "\n\n";
            return false;
        }
    }

    
    return true;
}