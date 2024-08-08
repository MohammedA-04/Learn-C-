#include <iostream>

// class is a noun
//       can access its methods and attributes [int, str's]

class Human
{

public:
    std::string name;
    std::string occupation;
    int age;

    void eat()
    {
        std::cout << "This person is eating\n";
    }

    void drink()
    {
        std::cout << "This person is drinking\n";
    }

    void sleep()
    {
        std::cout << "This person is sleeping\n";
    }
};

int main()
{

    Human h1;

    h1.name = "Rick";
    h1.occupation = "Sci";
    h1.age = 47;

    std::cout << h1.name << '\n';
    std::cout << h1.occupation << '\n';
    std::cout << h1.age << '\n';

    h1.eat();
    h1.drink();
    h1.sleep();
}