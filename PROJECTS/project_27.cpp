// Pass by reference using pointers

#include <iostream>
#include <vector>
using namespace std;

// void changeA(int a) {  // pass by value. Change not reflect in main function 
//     a = 20;
// }

void changeA(int *ptr) {  // pass by reference. Change reflect in main function
    *ptr = 20;
}


int main() {
    int a = 10;
    changeA(&a);

    cout << "Value of a inside main function : " << a << endl;

    return 0;
}