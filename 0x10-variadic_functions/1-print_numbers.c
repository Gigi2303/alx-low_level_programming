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
	va_list args;
	unsigned int j;
	
	va_start(args, n);

	for (j = 0; j < n; j++)
	{
	printf("%d", va_arg(args, unsigned int));

	if (j != (n - 1) && separator != NULL)
	printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
