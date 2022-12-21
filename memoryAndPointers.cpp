/***************************************************************************************************
* Purpose:
*    This file demonstrates the use of memory addresses in C++ and how arrays are built using them.
*    It also demonstrates 'pass by reference' and pointers. 
* Author:
*    Dad
***************************************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

void breakScope(int &a) {
    cout << "Inside function #1: " << a << endl;
    a += 23;
    cout << "Inside function #2: " << a << endl;
}

void printLine() {
    cout << "----------------------------------------------------------" << endl;
}

int main() {

    // 1.) Output memory address
    int a = 7;
    int b = 8;

    cout << "Address of a: " << &a << endl;
    cout << "Address of b: " << &b << endl;
    cout << "Size of int:  " << sizeof(int) << endl;

    printLine(); //---------------------------------------------------------------------------------

    // 2.) Add to memory address & dereferencing
    cout << "a + 1 = " << (&a + 1) << endl;
    cout << "a + 1 = " << *(&a + 1) << endl;

    printLine(); //---------------------------------------------------------------------------------

    // 3.) How arrays work (they are pointers)
    int myArray[] = {364, 261, 933, 702, 519};
    cout << "*myArray output:  " << *myArray << endl;
    cout << "myArray output:   " << myArray << endl;

    cout << "Array[0] address: " << &myArray[0] << endl;  // Same as array address
    cout << "Array[1] address: " << &myArray[1] << endl;

    cout << "myArray + 3:      " << *(myArray + 3) << endl;    // same as myArray[3]

    printLine(); //---------------------------------------------------------------------------------

    // 4.) A psuedo array using a pointer
    int c = 234, d = 345, e = 456; 
    int* fakeArray = &c;
    cout << "fakearray[2] = " << *(fakeArray + 2) << endl;

    printLine(); //---------------------------------------------------------------------------------

    // 5.) Passing a memory address as a parameter
    int f = 13;
    cout << "Before function: " << f << endl;
    breakScope(f);                              // See function definition
    cout << "After function: " << f << endl;

    return 0;
}