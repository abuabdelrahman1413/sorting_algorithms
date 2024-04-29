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
	int temp;

	i = 0;

	if (!array || !size)
		return;

	while (i < size)
	{
		for (k = 0; k < size - i - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				/*swap(&array[k], &array[k + 1]);*/
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
				print_array(array, size);

			}
		}
		i++;
	}
}
