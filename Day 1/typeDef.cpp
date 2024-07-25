// @note: typedef has been replaced by using keyword
#include <iostream>
using namespace std;

// new data type as text_t
typedef std::string text_t;
typedef int number_t;
using txt_t = std::string;
using num_t = int;

int main()
{
    text_t name = "Mohammed Ahmed";
    number_t num = 10;
    txt_t t = "Using";
    num_t n = 7;

    cout << name << '\n';
    cout << num << '\n';

    cout << t << '\n';
    cout << n << '\n';
}