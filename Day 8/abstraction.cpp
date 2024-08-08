#include <iostream>

class Stove
{
    // public: can be changed as accessible outside of class
    // private: you need a getter to acess amd set variables
private:
    int tmp = 30;

public:
    int getTemp()
    {
        return tmp;
    }

    void setTemp(int val)
    {
        this->tmp = val;
    }
};

int main()
{
    // Any public var can be changed here
    // e.g., class.variable = vlaue;
    int val;

    Stove s1;
    std::cout << "Current Temp: " << s1.getTemp() << '\n';

    std::cout << "What do you want to change the temp to: ";
    std::cin >> val;
    s1.setTemp(val);

    std::cout << "Current Temp Updated to: " << s1.getTemp() << '\n';

    return 0;
}