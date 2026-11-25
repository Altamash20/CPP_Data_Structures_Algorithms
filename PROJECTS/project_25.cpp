// NULL pointer

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int* ptr = NULL;
    int* ptr2;
    int** ptr3 = NULL;

    cout << ptr << endl;
    cout << ptr2 << endl; // prints some garbage value
    cout << ptr3 << endl;

    // cout << *ptr << endl;  /* deferencing in all these three cases gives segmentation error
    // cout << *ptr2 << endl;    means we are accessing a memory location which not
    // cout << *ptr3 << endl;    contains any value */
    

    return 0;
}