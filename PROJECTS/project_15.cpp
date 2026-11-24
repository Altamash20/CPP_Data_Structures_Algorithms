// Polymorphism

#include <iostream>
#include <string>
using namespace std;

class Print {
public:
    void show(int x) {
        cout << "int : " << x << endl; 
    }
    
     void show(char ch) {
        cout << "character : " << ch << endl;
    }

    void show(string s) {
        cout << "string : " << s << endl;
    }
};

int main() {

    Print p1;
    p1.show("Daisy");
    return 0;
}