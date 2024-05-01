#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - Displays an array of integers
 *
 * @arr: The array to display
 * @n: Number of elements in @arr
 */
void print_array(const int *arr, size_t n)
{
    size_t i;

    i = 0;
    while (arr && i < n)
    {
        if (i > 0)
            printf(", ");
        printf("%d", arr[i]);
        ++i;
    }
    printf("\n");
}
