// sum and product of all elements of an array

#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {5, 7, 1, 8, 2};
    int size = 5, sum = 0, prod = 1;

    for(int i = 0; i < size; i++) {
        sum = sum + arr[i];
        prod = prod*arr[i];
    }

    cout << "sum is : " << sum << endl;
    cout << "product is : " << prod << endl;

    return 0;
}