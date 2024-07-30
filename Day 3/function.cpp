#include <iostream>
using namespace std;

// programs are top down: remember
// so here we are defining the function
void happyBD(string name);

double square(double len);
string concatStr(string str1, string str2);

int main()
{

    string name = "Ahmed";
    happyBD(name);

    double length = 5.0;
    double area = square(length); // 25
    cout << "Area is " << area << "cm^2\n";

    string s1 = "Mohammed";
    string s2 = "Ahmed";
    cout << concatStr(s1, s2) << "\n";

    return 0;
}

void happyBD(string name)
{
    cout << "Happy BD to " << name << "\n";
}

// return key word
double square(double len)
{
    double result = len * len;
    return result;
}

string concatStr(string str1, string str2)
{
    return str1 + " " + str2;
}