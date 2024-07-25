#include <iostream>

// type conversion: one datetype to another [int to double]
// implicit = auto
// explicit = precede val with new data type (double)

int main()
{

    double pi = (int)3.14;
    std::cout << pi << '\n'; // 3

    // no truncation 8 / 10.0 = 0.8 * 100 = 80.0
    int correct = 1;
    int questions = 3;
    double scr = correct / (double)questions * 100;
    std::cout << scr << "%";
}