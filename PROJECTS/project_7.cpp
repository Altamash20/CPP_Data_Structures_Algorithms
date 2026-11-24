// Getter, Setter

#include <iostream>
#include <string>
using namespace std;


class Teacher {

private:
    double salary;

public:
    // properties / attributes
    string name;
    string dept;
    string subject;


    // methods / member functions
    void changeDept(string newDept) {
        dept = newDept;
    }

    // setter (set private values)
    void setSalary(double s) {
        salary = s;
    }

    // getter (get private values)
    double getSalary() {
        return salary;
    }
};


int main() {
    Teacher t1;
    t1.name = "Dr. Ramchandra";
    t1.dept = "ECE";
    t1.subject = "Signals & Systems";
    // t1.salary = 50000;
    t1.setSalary(55000);

    cout << t1.getSalary() << endl;

    // cout << t1.salary << endl;
    cout << t1.dept << endl;

    return 0;
}