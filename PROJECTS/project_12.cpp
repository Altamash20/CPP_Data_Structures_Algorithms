// Multi-level hierarchy

#include <iostream>
#include <string>
using namespace std;


class Person {
public:
    string name;
    int age;

};

class Student : public Person {
// name, age, rollno
public:
    int rollno;

};


class GradStudent : public Student {
public:
    string researchArea;
};

int main() {
    GradStudent s1;
    s1.name = "John Doe";
    s1.researchArea = "Aerodynamics";

    cout << s1.name << endl;
    cout << s1.researchArea << endl;

    return 0;
}