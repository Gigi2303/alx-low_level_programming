#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -This function Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - (0)
 *         else - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list pet;
	unsigned int i, s = 0;

	va_start(pet, n);

	for (i = 0; i < n; i++)
	s += va_arg(pet, unsigned int);
	va_end(pet);
	return (s);
}

