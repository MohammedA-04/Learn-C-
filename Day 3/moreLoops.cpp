#include <iostream>
using namespace std;

int main()
{
    // While condition is true do this
    string name;

    while (name.empty())
    {
        cout << "Enter your name: ";
        getline(cin >> ws, name);
    }

    cout << "Hello " << name << "\n";

    // do this code while this condition is true
    int num;
    do
    {
        cout << "Enter Positive Num: ";
        cin >> num;

    } while (num < 0);
    cout << "\n"
         << "For Loop: 0 to 5\n";

    // for loop w (strt, stp, step)
    for (int i = 1; i <= 5; i++)
    {
        // break, continue
        if (i == 1)
        {
            continue; // continue itertaion [2, 3 ...]
        }

        if (i == 4)
        {
            break; // break out of loop; misses [4,5]
        }

        if (i != 2 || i != 4)
        {
            cout << i << '\n';
        };
    }

    // nested loops
    int rows, cols;
    char symbol;

    cout << "\nHow many rows?: ";
    cin >> rows;

    cout << "\nHow many cols?: ";
    cin >> cols;

    cout << "Enter symbol to use: ";
    cin >> symbol;

    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j <= cols; j++)
        {
            cout << symbol;
        }
        cout << "\n";
    }
}
