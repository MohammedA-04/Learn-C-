// Formula: c = sqrt(a^2 + b^2);
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double a, b, c;

    cout << "Enter Side A: ";
    cin >> a;

    cout << "Enter Side B: ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "Result Side C is: " << c;

    return 0;
}