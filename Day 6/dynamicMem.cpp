// dynamic memory = mem allocated after program
// allows flexisbility when you dont know how much mem u need
// works with 'new' operator and more mem to heap
#include <iostream>

int main()
{

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "address:" << pNum << '\n';
    std::cout << "value:" << *pNum << '\n';

    delete pNum; // good-practice

    // User inputs size then dynamically add mem
    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}