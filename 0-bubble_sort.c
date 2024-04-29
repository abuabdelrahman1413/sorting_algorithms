#include "sort.h"

/**
 * bubble_sort - Function to sort array by bubble sort method.
 *
 * @array: array of integers to sort.
 * @size: size of array
 *
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, k;

	i = 0;

	if (!array || !size)
	return;

	while (i < size)
	{
		for (k = 0; k < size - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				swap(&array[k], &array[k + 1]);
				print_array(array, size);
			}
		}
		i++;
	}
}
