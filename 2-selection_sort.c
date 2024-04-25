#include "sort.h"
/**
 * selection_sort - sorts an array
 * of integers in ascending order
 * using the Selection sort algorithm
 *
 * @array: the array to be sorted
 * @size: the size of the array
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, sm_idx;
	int tmp, swaped;

	for (i = 0; i < size - 1; i++)
	{
		sm_idx = i;
		swaped = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[sm_idx] > array[j])
			{
				sm_idx = j;
				swaped = 1;
			}
		}
		if (swaped)
		{
			tmp = array[i];
			array[i] = array[sm_idx];
			array[sm_idx] = tmp;
			print_array(array, size);
		}
	}
}
