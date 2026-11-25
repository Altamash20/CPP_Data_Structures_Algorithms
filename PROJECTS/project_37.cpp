// intersection of two arrays

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
                break;
            }
        }

        if(isIntr) {
            cout << arr1[i] << endl;
        } 
    }

    return 0;
}