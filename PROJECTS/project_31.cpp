// implementation of pointer arithmetic in accessing array elements

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    cout << *(arr+4) << endl;

    return 0;
}