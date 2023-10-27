#include "sort.h"
#include "swap.c"

/**
 * selection_sort - A function that implements the selection sort
 * algorithm
 * @array: The input array
 * @size: The number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, smallest_idx;

	if (array == NULL || size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		smallest_idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[smallest_idx] > array[j])
			{
				smallest_idx = j;
			}
		}

		if (&array[smallest_idx] != &array[i])
		{
			swap(&array[i], &array[smallest_idx]);
			print_array(array, size);
		}
	}
}
