// Ampersand as bitwise operator and AddressOf operator

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a = 10;
    cout << &a << endl;

    cout << (7&4) << endl; // 111 & 100 -> 100 (i.e., 7 & 4 -> 4)

    return 0;
}