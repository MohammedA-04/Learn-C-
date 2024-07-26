#include <iostream>
#include <cmath>
using namespace std;

// cout << insertion ops && cin >> extractions ops

int main()
{
    string name;
    cout << "What's your name?\n";
    cin >> name;

    int age;
    cout << name << "\nWhat's your age?\n";
    cin >> age;

    cout << "\n"
         << name << " is yrs old " << age << "\n";

    // to read string which could have whitespaces use getLine
    string degYrs;
    cout << "\nHow long is comp sci degree [enter as word]\n";
    getline(cin >> ws, degYrs);
    // returns full string including whitespaces

    // Math functions
    int x = 5;
    int y = 10;
    int zMax = max(x, y);
    int zMin = min(x, y);

    cout << "\nMax of " << x << " & " << y << " is = " << zMax;
    cout << "\nMin of " << x << " & " << y << " is = " << zMin;

    // For More Math Functions use: <cmath>
    int zPow = pow(x, y);     // 9765625
    int zsqrt = sqrt(9);      // 3
    int zabs = abs(-9);       // 9
    int zround = round(4.99); // 5
    int zceil = ceil(2.6);    // 3
    int zfloor = floor(2.99); // 2

    cout << "\nPower of " << x << " & " << y << " is = " << zPow;
    cout << "\nSqrt of 9 is = " << zsqrt;
    cout << "\nbsolute of -9 is = " << zabs;
    cout << "\nrounded num of 4.99 is = " << zround;
    cout << "\nceil of 2.6 is = " << zceil;
    cout << "\nfloor of 2.99 is = " << zfloor << "\n";
}
