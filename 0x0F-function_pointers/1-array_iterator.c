#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem on a newl
 * @array: array
 * @size: size to print
 * @action: pointer to the function to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0, a < size; a++)
	action(array[a]);
}
