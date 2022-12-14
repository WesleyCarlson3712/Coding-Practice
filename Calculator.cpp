#include <iostream>
#include <vector>
using namespace std;

// ------------------------------------------------------------------------------------------------

int add     (int input1, int input2){return input1 + input2;}
int subtract(int input1, int input2){return input1 - input2;}
int multiply(int input1, int input2){return input1 * input2;}
int devide  (int input1, int input2){return input1 / input2;}

// ------------------------------------------------------------------------------------------------

int main(){

    int input1;
    int input2;
    int action;
    int answer;

    cout << "Enter number 1: ";
    cin >> input1;
    cout << "Enter number 2: ";
    cin >> input2;
    cout << "Select an action:\n1. Add\n2. Subtract\n3. Multiply\n4. Devide\n>>";
    cin >> action;

    switch(action) {
        case 1:
            answer = add(input1, input2);
            break;
        case 2:
            answer = subtract(input1, input2);
            break;
        case 3:
            answer = multiply(input1, input2);
            break;
        case 4:
            answer = devide(input1, input2);
            break;
        default:
            cout << "Invalid input";
    }

    cout << "The answer is: " << answer <<endl;

    return 0;
}

//  ------------------------------------------------------------------------------------------------