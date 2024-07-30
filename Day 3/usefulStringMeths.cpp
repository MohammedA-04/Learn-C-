#include <iostream>
using namespace std;

int main()
{

    string name;

    cout << "Enter your name: ";
    getline(cin >> ws, name);

    // stringName.length() returns lenght of str
    if (name.length() >= 1)
    {
        cout << "Name is valid\n";
    }
    else
    {
        cout << "Name must be over or equal to one character\n";
    }

    // stringName.empty returns content of str as !/null
    if (name.empty())
    {
        cout << "Name is empty\n";
    }
    else
    {
        cout << "Hi," << name << "\n";
    }

    // stringName.append() adds "string" to current var
    name.append("@yahoo.com");
    cout << "Is this your email: " << name << "\n";

    // stringName.append returns char at index X;
    cout << "Character at 1 in " << name << " is: " << name.at(0) << "\n";

    // stringName.insert performs insertion ops on string
    name.insert(0, "#1 ");
    cout << "Insert in '#1 ' to " << name << "\n";

    // stringName.find reutrns index of X value in string
    cout << "Finding first instance of '@' in name is at index: " << name.find('@') << "\n";

    // stringName.erase removes 'start::stop' from string
    cout << "Is currently: " << name << "\n";
    cout << "Without index 0-3: " << name.erase(0, 3);
}
