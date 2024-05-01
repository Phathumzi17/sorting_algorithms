#include "sort.h"

/**
 * _swap - Exchange two numbers
 * @x: Integer.
 * @z: Integer.
 **/
void _swap(int *x, int *z)
{
    int temp;

    temp = *x;
    *x = *z;
    *z = temp;
}

/**
 * selection_sort - Sorts an array using the Selection sort algorithm.
 * 
 * @arr: Array to be sorted.
 * @n: Size of the array.
 **/
void selection_sort(int *arr, size_t n)
{
    unsigned int j, i, min;

    if (arr == NULL || n < 2)
        return;

    for (j = 0; j < n; j++)
    {
        min = j;
        for (i = j + 1; i < n; i++)
        {
            if (arr[min] > arr[i])
                min = i;
        }
        if (min != j)
        {
            _swap(&arr[j], &arr[min]);
            print_array(arr, n);
        }
    }
}
