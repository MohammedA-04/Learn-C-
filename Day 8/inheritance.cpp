#include <iostream>

// inheritance: class recieve attr and meths from another class, child class inherit from a parent class
// helps to reuse similar code found within other classes

class Animal
{
public:
    bool alive = true;
    void eat()
    {
        std::cout << "This animal is eating\n";
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        std::cout << "The dog goes woof!\n";
    };
};

class Cat : public Animal
{
public:
    void meow()
    {
        std::cout << "The cat goes meow!\n";
    };
};

int main()
{

    Dog dog;
    std::cout << dog.alive << '\n';
    dog.bark();

    Cat cat;
    std::cout << cat.alive << '\n';
    cat.meow();
}