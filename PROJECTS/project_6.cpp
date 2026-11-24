// Attributes and methods

#include <iostream>
#include <string>
using namespace std;


class Teacher {
public:
    // properties / attributes
    string name;
    string dept;
    string subject;
    double salary;


    // methods / member functions
    void changeDept(string newDept) {
        dept = newDept;
    }
};


int main() {
    Teacher t1;
    t1.name = "Dr. Ramchandra";
    t1.dept = "ECE";
    t1.subject = "Signals & Systems";
    t1.salary = 50000;

    cout << t1.salary << endl;

    return 0;
}