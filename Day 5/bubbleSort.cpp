#include <iostream>
void sort(int array[], int size);

int main()
{
    int array[] = {1, 4, 2, 3, 5, 9, 7, 6};
    int size = sizeof(array) / sizeof(array[0]);

    std::cout << "Array before sorting: \n";
    for (int e : array)
    {
        std::cout << e << " ";
    }

    sort(array, size);

    std::cout << "\nArray after sorting: \n";
    for (int e : array)
    {
        std::cout << e << " ";
    }

    return 0;
}

void sort(int array[], int size)
{

    int tmp;
    for (int i = 0; i < size - 1; i++)
    {

        for (int j = 0; j < size - i - 1; j++)
        {

            if (array[j] > array[j + 1])
            {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}
