#include <iostream>
using namespace std;

int main()
{

    string car[] = {"BMW", "Audi", "VW"};

    std::cout << "All Content [" << car[0] << " " << car[1] << " " << car[2] << " ]\n";

    // to re assign
    std::cout << "Pre: " << car[2] << "\n";
    car[2] = "Volvo";
    std::cout << "Now: " << car[2] << "\n";

    // sizeOf = returns the size in by of variable
    double gpa = 2.1;
    std::cout << sizeof(gpa) << " bytes\n";

    char grades[] = {'A', 'B', 'C', 'D'};
    std::cout << sizeof(grades) / sizeof(char) << " elements in array\n";

    // array iterations
    string students[] = {"Mo", "Ahmed", "Shan"};
    cout << "\nArrays Content for Students\n";

    for (int i = 0; i < sizeof(students) / sizeof(std::string); i++)
    {
        std::cout << students[i] << "\n";
    }

    // #2 for-each
    cout << "\nArrays Content for Students via for-each\n";
    for (std::string student : students)
    {
        std::cout << student << "\n";
    }

    return 0;
}