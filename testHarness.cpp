/***************************************************************************************************
* Description:
*   The test harness calls all unit test functions and outputs the results in a uniform and readable
*   format. The is similar to how unit tests are called in real-world professional organizations.
* Author:
*   Wesley
***************************************************************************************************/
#include <iostream>
#include <vector>
#include <iomanip>
#include <set>
#include "unitTest.cpp"
using namespace std;

int main() {

    vector<bool> testResults = {};
    vector<string> fileNames = {
        "addDigits.cpp", 
        "find2ndchar.cpp", 
        "oddOrEven.cpp",
        "FirstDuplicate.cpp"
    };

    testResults.push_back(unitTest1());
    testResults.push_back(unitTest2());
    testResults.push_back(unitTest3());
    testResults.push_back(unitTest4());

    for(int i = 0; i < testResults.size(); i++) {
        cout << setw(20) << fileNames[i] << ": ";
        if(testResults[i])
            cout << "Passed" <<endl;
        else
            cout << "FAILED" <<endl;
    }

    return 0;
}