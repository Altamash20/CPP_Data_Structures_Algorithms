// Bubble sort algorithm

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    bool isSwap = false;

    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) {   /* if no swapping occur in first iteration itself, means array 
                           is already sorted */
            return;     /* writing return 0; is invalid since 0 is of type 'int' but 
                           the function we are creating is void */
        }
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[] = {2, 6, 9, 8, 0};
    int n = 5;

    // cout << bubbleSort(arr, n) << endl;
    bubbleSort(arr, n);  // first this function gets a call and make array sorted
    printArray(arr, n);  // then this function gets call and print array elements of that sorted array

    return 0;
}