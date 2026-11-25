/* swap min and max element in an array. Prefer if statement instead of min(), max()
function*/

#include <iostream>
#include <climits>
using namespace std;


int main() {

    int arr[] = {5, 7, 1, 8, 2};
    int size = 5;
    int smallest = INT_MAX, largest = INT_MIN;
    int sPtr, lPtr;

    for(int i = 0; i < size; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
            sPtr = i;
        }

        if(arr[i] > largest) {
            largest = arr[i];
            lPtr = i;
        }
    }
        
    
    swap(arr[sPtr], arr[lPtr]);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " " << endl;
    }

    return 0;
}