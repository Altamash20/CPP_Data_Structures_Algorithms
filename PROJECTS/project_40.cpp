// vector functions

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<char> vcc = {'a', 'b', 'c'};
    vector<int> v1; 

    // size
    cout << "size of vector = " << vcc.size() << endl;

    // push_back
    cout << "size of empty vector v1 = " << v1.size() << endl;
    v1.push_back(1);
    cout << "size of vector v1 after push_back = " << v1.size() << endl;
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    cout << "size of vector v1 after multiple push_back = " << v1.size() << endl;
    for (int val: v1) {
        cout << val << endl;
    }

    // pop_back
    v1.pop_back(); // it not takes any argument. The very last element gets deleted
    cout << v1.size() << endl;
    for (int val: v1) {
        cout << val << endl;
    }

    // front
    cout << v1.front() << endl;

    // back
    cout << v1.back() << endl;

    // at
    cout << v1.at(2) << endl; // element at index 2 


    return 0;
}