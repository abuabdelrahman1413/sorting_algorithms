#include "sort.h"
/**
 * selection_sort - Sorts an array of integers in ascending order using
 *                  the selection sort algorithm.
 * @array: Pointer to the first element of the array to be sorted.
 * @size: Number of elements in the array.
 *
 * Description:
 *     The selection_sort function implements the selection sort algorithm
 *     to sort the elements of the array passed to it. Selection sort works
 *     by repeatedly finding the minimum element from the unsorted part of
 *     the array and placing it at the beginning. This process continues
 *     until the entire array is sorted.
 *
 * Algorithm:
 *     1.Iterate through the array from the first element to the second-to-last
 *        element.
 *     2. For each iteration, assume the current element as the minimum.
 *     3. Iterate through the remaining unsorted elements to find the actual
 *        minimum element.
 *     4. Swap the current element with the minimum element found.
 *     5. Repeat steps 2-4 until the entire array is sorted.
 *
 * Example:
 *     int arr[] = {64, 25, 12, 22, 11};
 *     size_t size = sizeof(arr) / sizeof(arr[0]);
 *     selection_sort(arr, size);
 *
 * Complexity:
 *     Time Complexity: O(n^2) - Quadratic time complexity due to nested loops
 *                        iterating through the array.
 *     Space Complexity: O(1) -Constant space complexity as the sorting is done
 *                        in-place without using any extra space.
 */


void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;
	int tmp;

	if (!array || !size)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}
	if (min_index != i)
	{
		tmp = array[i];
		array[i] = array[min_index];
		array[min_index] = tmp;
	}
	print_array(array, size);
	}


}
