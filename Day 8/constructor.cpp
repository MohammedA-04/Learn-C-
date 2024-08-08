#include <iostream>

// constructor
// = method called when obj is created
// = used to assign values to attributes as args

class Student
{

public:
    std::string name;
    int age;
    double gpa;

    Student(std::string x, int y, double z)
    {
        this->name = x;
        this->age = y;
        this->gpa = z;
    }
};

int main()
{

    Student s1("Mo", 20, 2.1);
    Student s2("Shan", 16, 6.1);
    std::cout << "Name of S1 is: " << s1.name << '\n';
    std::cout << "Name of S2 is: " << s2.name << '\n';

    return 0;
}