#include <iostream>

class Pizza
{
public:
    std::string topping1;
    std::string topping2;

    Pizza()
    {
    }

    Pizza(std::string topping1)
    {
        this->topping1 = topping1;
    }

    Pizza(std::string topping1, std::string topping2)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main()
{

    Pizza pizza1("pepperoni");
    Pizza pizza2("sweet-peppers", "onions");
    Pizza pizza3;

    std::cout << "Pizza Toppings: " << pizza1.topping1 << '\n';
    std::cout << "Pizza Toppings: " << pizza2.topping1 << ", " << pizza2.topping2 << '\n'
              << '\n';

    std::cout << "To make 'pizza p3' work you need to have no args constructor for said class\n";

    return 0;
}