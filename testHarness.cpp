#include <iostream>
#include <vector>
#include <iomanip>
#include "unitTest.cpp"
using namespace std;

int main(){

    vector<bool> testResults = {};
    vector<string> fileNames = {
        "addDigits.cpp", 
        "find2ndchar.cpp", 
        "oddOrEven.cpp"
    };

    testResults.push_back(unitTest1());
    testResults.push_back(unitTest2());
    testResults.push_back(unitTest3());

    for(int i = 0; i < testResults.size(); i++){
        cout << setw(20) << fileNames[i] << ": ";
        if(testResults[i])
            cout << "Passed" <<endl;
        else
            cout << "FAILED" <<endl;
        
    }

    return 0;
}