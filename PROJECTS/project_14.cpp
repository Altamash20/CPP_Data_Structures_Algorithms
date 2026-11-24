// Hierarchical inheritance

#include <iostream>
#include <string>
using namespace std;


class Person {
public:
    string name;
    string age;

};

class Student : public Person {
public:
    int rollno;
    double fee;

};

class Teacher : public Person{
public:
    string subject;
    double salary;

};


int main() {
    

    return 0;
}