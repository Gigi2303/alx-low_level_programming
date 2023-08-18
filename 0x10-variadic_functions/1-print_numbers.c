#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list oaks;
	unsigned int ink;

	va_start(oaks, n);

	for (ink = 0; ink < n; ink++)
	{
		printf("%d", va_arg(oaks, int));

		if (ink != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(oaks);
}

