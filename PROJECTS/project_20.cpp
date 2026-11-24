// static variable in a class

#include <iostream>
#include <string>
using namespace std;

// class A {
// public:
//     int x;

//     void incX() {
//         x = x + 1;
//     }
// };

class A {
public:
    A() {
        cout << "constructor\n" << endl;
    }

    ~A() {
        cout << "destructor\n" << endl;
    }
    // int x;

    // void incX() {
    //     x = x + 1;
    // }
};

int main() {
    // A obj1;
    // A obj2;
    // obj1.x = 100;
    // obj2.x = 200;

    // cout << obj1.x << endl;
    // obj1.incX();
    // cout << obj1.x << endl;

    // cout << obj2.x << endl;
    // obj2.incX();
    // cout << obj2.x << endl;

    if (true) {
        // A obj;
        static A obj;
    }

    cout << "end of main function" << endl;

    return 0;
}