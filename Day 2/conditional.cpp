// Topics 11, 12, 14, 15
#include <iostream>
using namespace std;

int main()
{

    int age;
    cout << "Enter Your Age:";
    cin >> age;

    if (age)
    {

        if (age >= 18 && age < 120)
        {
            cout << "You are Adult\n";
        }
        else if (age < 18 && age > 0)
        {
            cout << "You are a Child\n";
        }
        else if (age < 0)
        {
            cout << "You are not born yet\n";
        }
        else
        {
            cout << "You not human\n";
        }
    }

    // conditional switch statment
    int month;
    cout << "Enter Month (1 - 6): ";
    cin >> month;

    switch (month)
    {
    case 1:
        cout << "It is January\n";
        break;
    case 2:
        cout << "It is Feburary\n";
        break;
    case 3:
        cout << "It is March\n";
        break;
    case 4:
        cout << "It is April\n";
        break;
    case 5:
        cout << "It is May\n";
        break;
    case 6:
        cout << "It is June\n";
        break;
    }

    // conditional ternary operator ?
    // condition ? exp1 : exp2
    int grade = 75;
    grade >= 60 ? cout << "You Pass\n" : cout << "You fail\n";

    // num has remainder then ODD : if not EVEN
    int num = 9;
    num % 2 ? cout << "ODD\n" : cout << "EVEN\n";
}
