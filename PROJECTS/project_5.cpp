#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target) {
    for(int i = 0; i < sz; i++) {
        if(arr[i] == target) {
            return i;   // FOUND -> index i
        }
    }

    return -1; // NOT FOUND -> Invalid index 
}


int main() {
    int arr[] = {4, 2, -1, 7, 0, 1};
    int sz = 6;
    int target = 10;

    cout << linearSearch(arr, sz, target) << endl;
    return 0;
}