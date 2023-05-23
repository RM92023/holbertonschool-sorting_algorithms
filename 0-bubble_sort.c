#include "sort.h"
/**
 * swap - swap the elements in the method bubble
 *
 * @a: the first element
 * @b: the second element
 *
 * Return: Helper function to swap two elements in the array
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


/**
 * bubble_sort - sort elements in ascending order
 *
 * @array: array of elements sorted
 * @size: size of array
 *
 * Return: Function to sort the array using Bubble sort algorithm
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;

	if (size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
			}
		}

		for (k = 0; k < size - 1; k++)
		{
			printf("%d, ", array[k]);
		}
		printf("%d\n", array[k]);
	}
}
