// array pointers. Array pointers are constant pointers.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    cout << arr << endl; // prints the address of the first element of the array
    cout << *arr << endl; // prints the value of the first element of the array

    // int a = 10, b = 15;
    // int* ptr = &a;

    // cout << ptr << endl;

    // ptr = &b;    // pointer ptr can point to different variable. It is not a constant pointer
    // cout << ptr << endl;

    // int a = 15;
    // arr = &a;  // gives error as arr is a constant pointer

    return 0;
}