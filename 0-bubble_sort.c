#include "sort.h"

/**
 *
 * bubble_sort -> Arranges an array of integers in ascending order
 *               through the bubble sort method.
 * @arr: Pointer to the array to undergo sorting.
 */
void bubble_sort(int *arr, size_t n)
{
	size_t i, j;
	int tmp;

	if (arr == NULL || n < 2)
		return;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (arr[j + 1] < arr[j])
			{
				/* Exchange adjacent elements */
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;

				/* Display the current state of the array */
				print_array(arr, n);
			}
		}
	}
}
