#include <iostream>
#include <iomanip>

using namespace std;

void showBal(double balance);
double deposit();
double withdraw(double balance);

int main()
{

    double balance = 0;
    int choice = 0;

    do
    {
        cout << "******************\n";
        cout << "Enter Your Choice\n";
        cout << "******************\n";

        cout << "1. Show Balance\n";
        cout << "2. Deposit Balance\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";

        cin >> choice;

        switch (choice)
        {
        case 1:
            showBal(balance);
            break;
        case 2:
            balance = balance + deposit();
            showBal(balance);
            break;
        case 3:
            balance = balance - withdraw(balance);
            showBal(balance);
            break;
        case 4:
            cout << "Thanks for visiting!\n";
            break;
        default:
            cout << "Invalid Choice\n";
        }
    } while (choice != 4);

    return 0;
}

// functions
void showBal(double balance)
{
    cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}

double deposit()
{
    double amt = 0;
    cout << "\nEnter amount to be deposited: \n";
    cin >> amt;

    if (amt > 0)
    {
        return amt;
    }
    else
    {
        cout << "Thats not valid amount\n";
        return 0;
    }
}

double withdraw(double balance)
{
    double amtToWithdraw = 0;
    cout << "\nEnter amount to be withdrawn";
    cin >> amtToWithdraw;

    if (amtToWithdraw <= balance)
    {
        return amtToWithdraw;
    }
    else
    {
        cout << "WITHDRAW TRANSACTION FAILED: amounut enter is not valid amount to withdraw\n";
        return 0;
    }

    return 0;
}