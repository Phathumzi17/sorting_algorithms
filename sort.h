#ifndef _SORT_H_
#define _SORT_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Node for a doubly linked list
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void bubble_sort(int *arr, size_t n);
void print_array(const int *arr, size_t n);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void quick_sort(int *arr, size_t n);
void lomuto_scheme(int *arr, size_t n, ssize_t low, ssize_t high);
int lomuto_partition(int *arr, size_t n, ssize_t low, ssize_t high);
void swap(int *first, int *second);
void selection_sort(int *arr, size_t n);

#endif
