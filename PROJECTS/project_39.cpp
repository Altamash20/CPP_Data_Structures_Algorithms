// for each loop on vectors

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> vec = {1, 2, 3};
    for(int i: vec) {       /* in this for each loop on vectors, 'i' is NOT the indices rather 
                                the elements at indices itself */
        cout << i << endl;
    }

    vector<char> vec1 = {'a', 'b', 'c'};
    for(char i: vec1) {
        cout << i << endl;
    }

    // to remove ambiguity we use variable names like val instead of i in for each loop
    vector<double> vec2 = {1.48, 2.22, 6.00};
    for(double val: vec2) {
        cout << val << endl;
    }


    return 0;
}