#include "variadic_functions.h"

/**
 * print_strings - Entry point
 *
 * Description: Prints strings, followed by a new line
 * @separator: Separator for the strings
 * @n: Number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings_list;

	va_start(strings_list, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(strings_list, const char*);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(strings_list);
	printf("\n");
}
