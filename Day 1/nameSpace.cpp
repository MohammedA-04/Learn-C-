#include <iostream>
#include <string>
using namespace std;

/* namespace allows identically named entities

   e.g., namespace name {int x = 2;}
   ... main function
        int x = 1; cout << x results in 1
        cout << name:x results in 2
*/

namespace nameOne
{
    string str = "Ahmed";
}

namespace nameTwo
{
    string str = "Mohammed";
}

int main()
{
    string str = "Random Name";

    cout << str << '\n';          // Random Name
    cout << nameOne::str << '\n'; // Ahmed
    cout << nameTwo::str << '\n'; // Mohammed

    // Another Convention

    /*
    using namespace nameOne;
    cout << str << '\n'; // implies the use of nameOne

    outputs: Ahmed
    */
}