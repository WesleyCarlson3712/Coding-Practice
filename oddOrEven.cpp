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
