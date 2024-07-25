#include <iostream>
#include <string>

using namespace std;

int main()
{

    // Primitive Data Types
    int a = 7.5;       // 7
    double b = 7;      // 7.00
    char asciiA = 65;  // A is 65
    char asciiX = '$'; // char can be any alpha-character
    string c = "hello";

    // Constant
    const double pi = 3.14;

    /*
     * $pi can then not be 3.15 or anything other than original value
     * e.g., pi = 3.15 is invalid statement
     */

    cout << a << '\n';
    cout << b << '\n';
    cout << asciiA << '\n';
    cout << c << '\n';
}