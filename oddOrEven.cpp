// this program finds if a given int contains only odd even or mixed numbers
#include <iostream>
#include <vector>
using namespace std;

// -------------------------------------------------------------------------------------------------

string oddOrEven(int number) {
    string answer = "";
    int numOdd = 0;
    int numEven = 0;

    do {
        if(number % 10 % 2 ) 
            numOdd++;
        else
            numEven++;
        
        if(numOdd && numEven)
            return "mixed";
    } while(number /= 10);

    if(numEven) 
        answer = "even";
    else 
        answer = "odd";

    return answer;
}

// -------------------------------------------------------------------------------------------------

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

// -------------------------------------------------------------------------------------------------

// int main() {
//     cout << unitTest() <<endl;
//     return 0;
// }
