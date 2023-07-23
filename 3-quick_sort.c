#include "sort.h"

/**
* lomu - sorts array of int
* @array: array
* @a: first element
* @b: last element
* @size: size
*
*/
void lomu(int *array, int a, int b, size_t size)
{
	int p = 0;

	if (a < b)
	{
		p = partition(array, a, b, size);
		lomu(array, a, p - 1, size);
		lomu(array, p + 1, b, size);
	}
}

/**
* quick_sort - sorts an array of int in ascending order
* @array: array
* @size: size
* Return: void
*/
void quick_sort(int *array, size_t size)
{
	lomu(array, 0, size - 1, size);
}


/**
* partition - divide the array
* @array: array
* @a: first element
* @b: last element
* @size: size
* Return: index of array
*/
int partition(int *array, int a, int b, size_t size)
{
	int p = array[b];
	int i = a - 1, j, temp;

	for (j = a; j <= b; j++)
	{
		if (array[j]  <= p)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	return (i);
}
