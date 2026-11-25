// dereference operator *

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int a = 10;
    int* ptr = &a;
    int** ptr2 = &ptr;

    cout << *(&a) << endl;  // dereferencing value of a
    cout << *ptr << endl;
    cout << *(&ptr) << endl;
    cout << *ptr2 << endl;

    cout << **ptr2 << endl; // dereferencing parent pointer (ptr2) twice to get value of a

    return 0;
}