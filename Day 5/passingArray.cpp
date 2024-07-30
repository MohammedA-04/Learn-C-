#include <iostream>
using namespace std;

// defining function which takes double array
double getTotal(double prices[], int size);

int main()
{

    double prices[] = {49.99, 15.05, 75, 9.99};

    // pointer has no idea big the array, hence length is @param
    int nSize = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, nSize);

    cout << "S" << total;

    return 0;
}

double getTotal(double prices[], int size)
{
    double total = 0;

    for (int i = 0; i < size; i++)
    {
        total = total + prices[i];
    }

    return total;
}