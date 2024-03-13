#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of
 *			integers using the Binary search algorithm
 * @array: pointer to first element in  array of integers
 * @size: number of elements
 * @value: required value
 * Return: the index where value is located, -1 if failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t index = 0, mid = 0, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (index = low; index <= high; index++)
		{
			if (index < high)
				printf("%d, ", array[index]);
			else
				printf("%d\n", array[index]);
		}
		mid = (low + high) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted
 *		array of integers using the Exponential search algorithm
 * @array: pointer to first element in array
 * @size: number of elements
 * @value: required value
 * Return: first index where value is located, -1 if failure
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t index, next;
	int result;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	index = 1;

	while (array[index] < value && index < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)index, array[index]);
		index *= 2;
	}

	next = (index >= size) ? (size - 1) : index;

	index /= 2;

	printf("Value found between indexes [%d] and [%d]\n", (int)index, (int)next);

	result = binary_search(array + index, (next + 1) - index, value);

	if (result >= 0)
		result += index;

	return (result);
}
