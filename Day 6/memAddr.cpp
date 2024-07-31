#include <iostream>
using namespace std;
void swap(std::string &x, std::string &y);

std::string tmp, x, y;
std::string name = "Mo";

int main()
{

    std::string name = "bro";
    int age = 20;
    bool student = true;

    // this memory address using '&'
    std::cout << &name << '\n';

    x = "Kool-aid";
    y = "Water";
    std::cout << "Before Pass By Ref Swap:\n";
    std::cout << "X:" << &x << '\n';
    std::cout << "Y:" << &y << '\n';

    // swapping
    swap(x, y);
    std::cout << "\nAfter Pass By Ref Swap:\n";
    std::cout << "X:" << x << '\n';
    std::cout << "Y:" << y << '\n';

    /*
    tmp = x;
    x = y;
    y = tmp;

    / swapping values
    std::cout << 'X:' << x << '\n';
    std::cout << 'X:' << y << '\n';
    */

    constant(name);

    return 0;
}

// function like this WITHOUT '&' makes a copy

// swapn() has pass by REF hence changing org content;
void swap(std::string &x, std::string &y)
{

    std::string temp;
    tmp = x;
    x = y;
    y = tmp;
}

// const params
// for '&' passbyRef it's important as we don want to change ORG VAR
void constant(const std::string name)
{

    // illegal: as it's read-only
    // name = "Ahmed";
    cout << name << "\n";
}