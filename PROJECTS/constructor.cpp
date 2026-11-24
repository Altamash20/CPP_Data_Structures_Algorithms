#include <iostream>
#include <string>
using namespace std;


class Teacher {
public:

    // properties or attributes
    string name;
    string dept;
    string subject;
    double salary;


    // non-parameterized
    Teacher() {
        cout << "Hi, I am constructor\n";
        dept = "Computer Science";
    }

    // parameterized
    Teacher(string name, string dept, string subject, double salary) {
        this->name = name; // indicates LHS "name" is property of object (RHS is paramter of constructor)
        this->dept = dept; // indicates LHS "dept" is property of object (RHS is paramter of constructor)
        this->subject = subject;  // indicates LHS "subject" is property of object (RHS is paramter of constructor)
        this->salary = salary;  // indicates LHS "salary" is property of object (RHS is paramter of constructor)
    }

    // copy constructor
    Teacher(Teacher &obj) {   // pass by reference
        cout << "I am custom copy constructor" << endl;
        this->name = obj.name;
        this->dept = obj.dept;
        this->subject = obj.subject;
        this->salary = obj.salary;
    }

    // methods or member functions
    void changeDept(string newDept) {
        dept = newDept;
    };

    void getInfo() {
        cout << "name : " << name << endl;
        cout << "subject : " << subject << endl;
    };
};


int main() {
    Teacher t1("Neelam Srivastava", "ECE", "Emerging Tech", 70000);       // constructor call done. Used for initialization of object
    t1.getInfo();

    Teacher t2(t1);      //custom copy constructor
    t2.getInfo();

    return 0;
}