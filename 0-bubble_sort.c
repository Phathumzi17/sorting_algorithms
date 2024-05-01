/*
 * File: 0-bubble_sort.c
 */

#include "sort.h"

/*
 * swap_values - Exchange two integers in an array.
 * @val1: The first integer to exchange.
 * @val2: The second integer to exchange.
 */
void swap_values(int *val1, int *val2)
{
	int tmp;

	tmp = *val1;
	*val1 = *val2;
	*val2 = tmp;
}

/**
 * bubble_sort - Arrange an array of integers in ascending order.
 * @arr: An array of integers to arrange.
 * @n: The size of the array.
 *
 * Description: Prints the array after each exchange.
 */
void bubble_sort(int *arr, size_t n)
{
	size_t i, len = n;
	bool bubbles = false;

	if (arr == NULL || n < 2)
		return;

	while (bubbles == false)
	{
		bubbles = true;
		for (i = 0; i < len - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap_values(arr + i, arr + i + 1);
				print_array(arr, n);
				bubbles = false;
			}
		}
		len--;
	}
}
