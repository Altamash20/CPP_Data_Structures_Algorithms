/* creating pointer variable. Either of the two syntax can be used to create pointer 
as shown below */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a = 10;
    int* ptr1 = &a; 
    int *ptr2 = &a;
    cout << ptr1 << "\n" << ptr2 << "\n" << &a << endl;
    cout << &ptr1 << "\n" << &ptr2 << endl;  // address of ptr1 and ptr2 are different

    float price = 101.25;
    float* ptr3 = &price;
    cout << ptr3 << endl;
    cout << &ptr3 << endl;

    return 0;
}