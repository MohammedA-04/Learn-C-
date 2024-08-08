#include <iostream>

// struct: is group related var under one name
//         var are known as 'members'

struct student
{
    std::string name;
    double gpa;
    bool enrolled;
};

int main()
{

    student student1;
    student1.name = "Mohammed Ahmed";
    student1.gpa = 2.1;
    student1.enrolled = true;
    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << ((student1.enrolled == 1) ? "true" : "false") << '\n';

    return 0;
}