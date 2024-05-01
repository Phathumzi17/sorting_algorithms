#include "sort.h"

/**
 * swap_values - Swaps two integers
 * @first_val: First integer
 * @second_val: Second integer
 */
void swap_values(int *first_val, int *second_val)
{
    int temp = *first_val;
    *first_val = *second_val;
    *second_val = temp;
}

/**
 * lomuto_partition - Partitions array using Lomuto scheme
 * @arr: Array to partition
 * @size: Size of array
 * @low_idx: Low index
 * @high_idx: High index
 * Return: Index of pivot
 */
int lomuto_partition(int *arr, size_t size, ssize_t low_idx, ssize_t high_idx)
{
    ssize_t i, j;
    int pivot;

    pivot = arr[high_idx];
    i = low_idx - 1;
    for (j = low_idx; j < high_idx; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            if (i != j)
            {
                swap_values(&arr[i], &arr[j]);
                print_array(arr, size);
            }
        }
    }
    if (arr[high_idx] < arr[i + 1])
    {
        swap_values(&arr[i + 1], &arr[j]);
        print_array(arr, size);
    }
    return (i + 1);
}

/**
 * lomuto_scheme - Sorts array using Lomuto scheme
 * @arr: Array to sort
 * @size: Size of array
 * @low_idx: Low index
 * @high_idx: High index
 */
void lomuto_scheme(int *arr, size_t size, ssize_t low_idx, ssize_t high_idx)
{
    int pivot;

    if (low_idx < high_idx)
    {
        pivot = lomuto_partition(arr, size, low_idx, high_idx);

        lomuto_scheme(arr, size, low_idx, pivot - 1);
        lomuto_scheme(arr, size, pivot + 1, high_idx);
    }
}

/**
 * quick_sort - Sorts array using Quick sort algorithm
 * @array: Array to sort
 * @size: Size of array
 */
void quick_sort(int *array, size_t size)
{

    if (array == NULL || size < 2)
        return;

    lomuto_scheme(array, size, 0, size - 1);
}
