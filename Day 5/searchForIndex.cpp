#include <iostream>

// function declaration
using namespace std;
int searchArray(int array[], int size, int elemnt);

// global var:: using global state for searchArray()
bool hasNumber = false;

int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    int nSize = size(nums) / sizeof(nums[0]);
    int index;
    int myNum;

    cout << "Enter element to search for: ";
    cin >> myNum;

    index = searchArray(nums, nSize, myNum);

    if (hasNumber)
    {
        cout << myNum << " is found at index " << index;
    }
    else
    {
        cout << myNum << " is not found within array";
    }

    return 0;
}

int searchArray(int array[], int size, int elemnt)
{
    for (int i = 0; i < size; i++)
    {

        cout << "ELEMENT AT " << i << " is " << array[i] << "\n";
        if (array[i] == elemnt)
        {
            hasNumber = true;
            return i;
        }
    }
    return -1;
}