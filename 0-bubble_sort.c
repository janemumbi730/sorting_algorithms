#include "sort.h"

/**
* bubble_sort - sorts array of int in ascending order
* @array: array to be sorted
* @size: size of array
* Return: void
*/

void bubble_sort(int *array, size_t size)
{
	int t;
	size_t a, b;

	if (array == NULL || size == 0)
		return;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				t = array[b];
				array[b] = array[b + 1];
				array[b + 1] = t;
				print_array(array, size);
			}
		}
	}
}
