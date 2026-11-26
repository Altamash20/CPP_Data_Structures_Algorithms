// static vs dynamic allocation of memory
// dynamic memory allocation of capacity *2 of previous capacity

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vcc;
    vcc.push_back(0);
    vcc.push_back(1);
    vcc.push_back(2);
    cout << vcc.size() << endl;
    cout << vcc.capacity() << endl;

    return 0;
}