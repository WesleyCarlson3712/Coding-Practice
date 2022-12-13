// this program finds if a given int contains only odd even or mixed numbers
#include <iostream>
#include <vector>
using namespace std;

// -------------------------------------------------------------------------------------------------

int addDigits(int number) {
    int sum = 0;

    do {
        sum += number % 10;
        
    } while(number /= 10);

    return sum;
}

// -------------------------------------------------------------------------------------------------

int reduceNumber(int number){
    while(number > 9){
        number = addDigits(number);
    }
    return number;
}

// -------------------------------------------------------------------------------------------------

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

// int main() {
//     cout << unitTest() << endl;
//     return 0;
// }
