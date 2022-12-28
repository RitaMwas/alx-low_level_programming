#include "variadic_functions.h"

/**
 * print_numbers - Entry point
 *
 * Description: Prints numbers, followed by a new line
 * @separator: The separator between the numbers
 * @n: Number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers_list;
	unsigned int i;

	va_start(numbers_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers_list, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers_list);
}
