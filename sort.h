#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void swap(int *first_int, int *second_int);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void freeing(listint_t *list);
void sorting_validation(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void qs(int *array, ssize_t before, ssize_t after, size_t size);
size_t los(int *array, ssize_t before, ssize_t after, size_t size);
void shell_sort(int *array, size_t size);
size_t knuth_sequence_formula(size_t size);
void merge_sort(int *array, size_t size);
void merge(int *array, int *left, size_t lz, int *right, size_t rz);
void insert(int *array, size_t size);

#endif /*SORT_H*/
