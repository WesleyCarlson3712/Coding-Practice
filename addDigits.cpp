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
