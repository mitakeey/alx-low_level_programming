#include "search_algos.h"

/**
 * advanced_binary - searches for a value in an array of integers
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look for
 * Return: the index of the found value,
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (help_binary(array, value, 0, size - 1));
}

/**
 * help_binary - searches for a value in an array of integers 
 * @array: array to search the value in
 * @value: value to look for
 * @lo: index of the low bound
 * @hi: index of the high bound
 *
 * Return: the index of the found value,
 */
int help_binary(int *array, int value, size_t lo, size_t hi)
{
	size_t mid;

	array_print(array, lo, hi);
	if (hi == lo && array[lo] != value)
		return (-1);

	mid = ((hi - lo) / 2) + lo;
	if (array[mid] == value)
		return (mid);
	if (array[mid] < value)
		return (help_binary(array, value, mid + 1, hi));
	if (array[mid] > value)
		return (help_binary(array, value, lo, mid - 1));
	return (-1);
}

/**
 * array_print - prints an array
 * @array: array to print
 * @lo: index of the low bound
 * @hi: index of the high bound
 */
void array_print(int *array, size_t lo, size_t hi)
{
	size_t i;

	printf("Searching in array: ");
	for (i = lo; i <= hi; i++)
	{
		printf("%d", array[i]);
		if (i < hi)
			printf(", ");
	}
	printf("\n");
}