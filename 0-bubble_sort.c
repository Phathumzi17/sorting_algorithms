

#include "sort.h"


void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j + 1] < array[j])
			{
				/* Swap adjacent elements */
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;

				/* Print the current state of the array */
				print_array(array, size);
			}
		}
	}
}
