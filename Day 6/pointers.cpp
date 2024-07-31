#include <iostream>

// pointer is var stores memAddr of another var;

int main()
{

    // setting pName address to address of $name
    std::string name = "Bro";
    int age = 20;
    std::string freePizza[5] = {"Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5"};

    std::string *pName = &name;
    int *pAge = &age;

    // note array is already memory address no need for '&'
    std::string *pFreePizza = freePizza;

    std::cout << pName << '\n';
    std::cout << *pName << '\n'; // Accessing Data

    std::cout << pAge << '\n';
    std::cout << *pAge;
    std::cout << *pFreePizza; // returns index 0

    return 0;
}