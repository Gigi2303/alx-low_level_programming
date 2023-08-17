#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of the array
 * @cmp: pointer to function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; i < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}

