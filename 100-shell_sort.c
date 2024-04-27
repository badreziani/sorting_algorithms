#include "sort.h"

/**
 * shell_sort - sorts an array of integers
 * in ascending order using the Shell sort algorithm,
 * using the Knuth sequence
 *
 * @array: array of ints
 * @size: the size of the array
 *
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	int gap, i = 0;

	gap = get_initial_gap(size);
	printf("GAP => %d\n", gap);
}

/**
 * get_initiale_gap - get the first gap
 * @size: the size of the array to be sorted
 * Return: the fisrt gap
 */
int get_initial_gap(size_t size)
{
	size_t gap = 1;

	while (gap < size)
		gap = gap * 3 + 1;
	return ((int)gap);
}
