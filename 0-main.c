#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Starting point
 *
 * Return: Always returns 0
 */
int main(void)
{
    int arr[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, size);
    printf("\n");
    bubble_sort(arr, size);
    printf("\n");
    print_array(arr, size);
    return (0);
}
