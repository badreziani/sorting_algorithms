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
	size_t i, j;
	int selected, tmp;

	for (i = 0; i < size - 1; i++)
	{
		selected = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (selected > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				selected = tmp;
			}
		}
		array[i] = selected;
		print_array(array, size);
	}
}
