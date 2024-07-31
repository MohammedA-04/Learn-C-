#include <iostream>

int main()
{

    std::string foods[5]; // limited to 5 in size
    int sz = sizeof(foods) / sizeof(foods[0]);
    std::string temp;

    for (int i = 0; i < sz; i++)
    {
        std::cout << "Enter Food you like or 'q' to quit #" << i + 1 << ": ";
        std::getline(std::cin >> std::ws, temp);
        std::cout << "\n";

        if (temp == "q")
        {
            break;
        }
        else
        {
            foods[i] = temp;
        }
    }

    std::cout << "Following Foods:\n";

    for (int i = 0; !foods[i].empty(); i++)
    {
        std::cout << foods[i] << '\n';
    }

    return 0;
}