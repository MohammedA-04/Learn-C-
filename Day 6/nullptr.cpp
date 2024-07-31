#include <iostream>

int main()
{

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr)
    {
        std::cout << "addr was not assigned :(";
    }
    else
    {
        std::cout << "addr was assigned :)";
    }

    return 0;
}