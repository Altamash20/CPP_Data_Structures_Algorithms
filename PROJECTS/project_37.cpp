/* intersection of two arrays. With practice, it will be clear where to initialize bool 
variable with true and where with false */

#include <iostream>
using namespace std;

int main() {

    int arr1[] = {1, 2, 8, 9, 5}, arr2[] = {1, 2, 5};
    int size1 = 5, size2 = 3;

    for(int i = 0; i < size1; i++) {
        bool isIntr = false;
        for(int j = 0; j < size2; j++) {
            if(arr1[i] == arr2[j]){
                isIntr = true;
                break;  // continue statement will check equality of arr1 element with each of arr2 elements
            }
        }

        if(isIntr) {
            cout << arr1[i] << endl;
        } 
    }

    return 0;
}