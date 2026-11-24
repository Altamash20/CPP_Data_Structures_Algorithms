#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[] = {23, -4, 6, 1, 0};

    // int smallest = INT_MAX;
    // int largest = INT_MIN;
    int size = 5;
    int smallest_idx = 0;
    int largest_idx = 0;

    for(int i = 0; i < size; i++){
        if (arr[i] < arr[smallest_idx]) {
            smallest_idx = i;
        } 
    }

    for(int j = 0; j < size; j++){
        if (arr[j] > arr[largest_idx]) {
            largest_idx = j;
        } 
    }

    cout << "index of smallest value = " << smallest_idx << endl;
    cout << "index of largest value = " << largest_idx << endl;

    return 0;
}