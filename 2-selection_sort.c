#include "sort.h"
/**
 * swip - swap two numbers
 * @int1: first integer
 * @int2: second integer
 **/
void swip(int *int1, int *int2)
{
	int temp;

	temp = *int1;
	*int1 = *int2;
	*int2 = temp;
}

/**
 * selection_sort - sorts array
 * @array: the array
 * @size: the size
 **/

void selection_sort(int *array, size_t size)
{
	unsigned int a, b, c;

	if (array == NULL || size < 2)
		return;

	for (a = 0; a < size; a++)
	{
		c = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[c] > array[b])
				c = b;
		}
		if (c != a)
		{
			swip(&array[a], &array[c]);
			print_array(array, size);
		}
	}

}
