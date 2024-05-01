#include "sort.h"

/**
 * bubble_sort - Arranges an array of integers in ascending order
 * using the Bubble sort algorithm.
 *
 * @arr: The array to be sorted.
 * @n: Number of elements in @arr.
 */
void bubble_sort(int *arr, size_t n)
{
    size_t i, j;
    int tmp;

    if (!arr || n < 2)
        return;

    for (i = 0; i < n - 1; ++i)
    {
        for (j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                print_array(arr, n);
            }
        }
    }
}
