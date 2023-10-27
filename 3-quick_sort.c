#include "sort.h"
#include "swap.c"

/**
 * los - A lomuto partition scheme for quicksort
 * @array: The input array
 * @before: The before bound index
 * @after: The after bound index
 * @size: The number of elements in @array
 * Return: The index of the pivot after partitioning
 */
size_t los(int *array, ssize_t before, ssize_t after, size_t size)
{
	int pivot = array[after];
	ssize_t i = before - 1, j;

	for (j = before; j < after; j++)
	{
		if (array[j] <= pivot)
		{
		i++;
		if (i != j)
		{
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
		}
	}

	if (i + 1 != after)
	{
		swap(&array[i + 1], &array[after]);
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * qs - A Recursive function for quicksort
 * @array: The input array
 * @before: The before bound index
 * @after: The after bound index
 * @size: The number of elements in @array
 */
void qs(int *array, ssize_t before, ssize_t after, size_t size)
{
	if (before < after)
	{
	size_t pivot_idx = los(array, before, after, size);

	qs(array, before, pivot_idx - 1, size);
	qs(array, pivot_idx + 1, after, size);
	}
}

/**
 * quick_sort - A function that implements the quick sort
 * algorithm
 * @array: The input array
 * @size: The number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
	return;

	qs(array, 0, size - 1, size);
}
