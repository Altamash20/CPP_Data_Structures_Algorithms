// Multiple inheritance

#include <iostream>
#include <string>
using namespace std;


class Student {
public:
    string name;
    int rollno;

};

class Teacher{
public:
    string subject;
    double salary;

};


class TA : public Student, public Teacher {

};

int main() {
    TA t1;
    t1.name = "John Doe";
    t1.rollno = 1234;
    t1.subject = "Operating Systems";
    t1.salary = 80000;

    cout << "TA's name : " << t1.name << endl;
    cout << "TA's rollno : " << t1.rollno << endl;
    cout << "TA's subject : " << t1.subject << endl;
    cout << "TA's salary : " << t1.salary << endl;

    return 0;
}