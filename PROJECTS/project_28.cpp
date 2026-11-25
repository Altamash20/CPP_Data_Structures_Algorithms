// Pass by reference using references (alias)

#include <iostream>
#include <vector>
using namespace std;

void changeA(int &b) {  // here '&' is reference operator. It means 'b' is same as 'a' 
    b = 20;
}

int main () {
    int a = 10;
    changeA(a);

    cout << "Value of a inside main function : " << a << endl;
 
    return 0;
}