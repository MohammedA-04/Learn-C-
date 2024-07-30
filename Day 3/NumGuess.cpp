#include <iostream>
using namespace std;

int main()
{

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;
    cout << "Num is: " << num << "\n";

    cout << "******** Number Guessing Game ********\n";

    do
    {
        cout << "Enter guess between (1-200): ";
        cin >> guess;

        if (guess > num)
        {
            cout << "Too High!\n";
            tries++;
        }
        else if (guess < num)
        {
            cout << "Too Low!\n";
            tries++;
        }
        else
        {
            cout << "CORRECT # of tries: " << tries << '\n';
        }

    } while (guess != num);

    cout << "******** END ********\n";

    return 0;

    // do while
}