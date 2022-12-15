#include <iostream>
#include <vector>
using namespace std;

// ------------------------------------------------------------------------------------------------

int add     (int input1, int input2){return input1 + input2;}
int subtract(int input1, int input2){return input1 - input2;}
int multiply(int input1, int input2){return input1 * input2;}
int devide  (int input1, int input2){return input1 / input2;}

// ------------------------------------------------------------------------------------------------

int getInt(int min, int max){
    int number = 0;
    bool invalid = false;

    do{
        cin >> number;
        invalid = (number < min || number > max);

        if(invalid) {
            cout << "dont be stupid, stupid head" <<endl;
            cin.clear();
            cin.ignore(10000,'\n');
        }

    } while(invalid);

    return number;
}

// ------------------------------------------------------------------------------------------------

int main(){

    int input1 = 0;
    int input2 = 0;
    int answer = 0;

    cout << "Enter number 1: ";
    input1 = getInt(-2147483648, 2147483647);

    cout << "Enter number 2: ";
    input2 = getInt(-2147483648, 2147483647);

    cout << "Select an action:\n1. Add\n2. Subtract\n3. Multiply\n4. Devide\n>>";
    answer = getInt(1, 4);

    switch(answer) {
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