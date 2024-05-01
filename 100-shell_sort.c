#include "sort.h"

void shell_sort(int *arr, size_t n)
{
    int i, j, tmp, gap = 0;

    if ((arr == NULL) || (n < 2))
        return;
    /* Calculate initial gap using Knuth's sequence */
    while (gap <= ((int)n / 3))
        gap = (gap * 3) + 1;
    for (; gap > 0; )
    {
        /* Perform insertion sort with the current gap */
        for (i = gap; i < (int)n; i++)
        {
            tmp = arr[i];
            for (j = i; (j >= gap) && (arr[j - gap] > tmp); j -= gap)
            {
                /* Shift elements to the right until correct position is found */
                arr[j] = arr[j - gap];
            }
            arr[j] = tmp;
        }
        gap = (gap - 1) / 3;
        /* Print the current state of the array */
        print_array(arr, n);
    }
}
