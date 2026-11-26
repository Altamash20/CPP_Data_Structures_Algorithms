// vectors container of S.T.L.

#include <iostream>
#include <vector>
using namespace std;


int main() {
    /* vector<int> vec; // size = 0;
    cout << vec[0] << endl;  segmentation fault -> trying to access a location of memory 
    which is NOT possible to be accessed */

    vector<int> vec = {1, 3, 4};
    cout << vec[1] << endl;

    vector<int> vec1(3, 0); // size of vector is three and its elements will be 0, 0, 0 
    cout << vec1[2] << endl;

    // vector<int> vec2(3, 1, 2, 3); invalid, it NOT works like size=3 and elements are 1, 2, 3
    
    return 0;
}