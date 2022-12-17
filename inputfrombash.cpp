#include<iostream>
using namespace std;

int add(int num1, int num2) {return num1 + num2;}

int main(int argc, char* argv[]) {
    int first = int(*argv[1]) - 48;
    int second = int(*argv[2]) - 48;
 
    cout << "this is argc: " << argc << endl;
    cout << "this is argv (1)" << argv[0] << endl;
    cout << "this is argv (2)" << argv[1] << endl;
    cout << "this is argv (3)" << argv[2] << endl;
    cout << add(first, second) << endl;

    return 0;
}