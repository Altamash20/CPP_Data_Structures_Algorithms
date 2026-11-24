//static variable in a function

#include <iostream>
#include <string>
using namespace std;

// void fun() {
//     int x = 0;
//     cout << "x: " << x << endl;
//     x++;
// }

static void fun() {
    static int x = 0;
    cout << "x: " << x << endl;
    x++;
}

int main() {
    fun();
    fun();
    fun();

    return 0;
}