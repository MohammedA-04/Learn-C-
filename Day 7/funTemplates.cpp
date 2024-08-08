#include <iostream>

template <typename T, typename U>
// auto lets complier deduce return data type
auto max(T x, U y)
{
    return (x > y) ? x : y;
}

/* returns type T
T max(T x, U y)
{
    return (x > y) ? x : y;
}
*/

int main()
{

    std::cout << max(2.2, 1) << '\n';

    return 0;
}