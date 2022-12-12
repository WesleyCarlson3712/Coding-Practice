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

int reduiceNumber(int number){
    while(number > 9){
        number = addDigits(number);
    }
    return number;
}

// -------------------------------------------------------------------------------------------------

bool unitTest(){
    vector<int> input = {1234,5678,90,0};
    vector<int> output = {1,8,9,0};

    for(int i = 0; i < input.size(); i++){
        if(reduiceNumber(input[i]) != output[i])
            return false;
    }

    return true;
}
int main() {
    cout << unitTest() << endl;
    return 0;
}
