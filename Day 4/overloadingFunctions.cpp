#include <iostream>
using namespace std;

void square(int i);
void square(double d);

// global variables can defined here
// outside the main() or other fun()

// using ::var to imply use of global variable (if conflicting var's exist) in one scope

int main()
{

    double d = 3.14;
    int i = 9;

    square(9);
    square(3.14);
}

void square(int i)
{
    cout << i << " * by " << i << " is " << i * i << "\n";
}

void square(double d)
{
    cout << d << " * by " << d << " is " << d * d << "\n";
}