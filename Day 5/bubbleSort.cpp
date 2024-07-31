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

/* sorting method

    * array: {1, 3, 2, 4};
    * for i stop at 3 (size-1);
    * for each i iteration stop at 2 (s1-1)

    # Pass One
    [j:0][j+1:1] j(1) > j(3): false
    [j:1][j+1:2] j(3) > j(2): true, {1,2,3,4}
    [j:2][J+1:3] j(3) > j(4): false

    # Pass Two, [i == 1]
    [j:0][j+1:1] j(1) > j(2): false
    [j:1][j+1:2] j(2) > j(3): false

    # Pass Three, [i == 2]
    [j:0][j+1:1] j(1) > j(2): false



 */
void sort(int array[], int size)
{
    // OUTERLOOP: to loop all contnents
    // INNERLOOP: to compare j to j+1 until (sz - idx) -1

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
