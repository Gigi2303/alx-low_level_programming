#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *tr, *ep = "";

	va_list lt;

	va_start(lt, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", ep, va_arg(lt, int));
					break;
				case 'i':
					printf("%s%d", ep, va_arg(lt, int));
					break;
				case 'f':
					printf("%s%f", ep, va_arg(lt, double));
					break;
				case 's':
					tr = va_arg(lt, char *);
					if (!tr)
						tr = "(nil)";
					printf("%s%s", ep, tr);
					break;
				default:
					a++;
					continue;
			}
			ep = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(lt);
}


