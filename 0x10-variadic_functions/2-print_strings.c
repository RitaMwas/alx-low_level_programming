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
	char *str;

	va_start(strings_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings_list, char *);
		if (separator)
		{
			if (str)
			{
				if (i == 0)
					printf("%s", str);
				else
					printf("%s%s", separator, str);
			}
			else
			{
				if (i == 0)
					printf("(nil)");
				else
					printf("%s(nil)", separator);
			}
		}
		else
		{
			if (!str)
				printf("(nil)");
			else
				printf("%s", str);
		}
	}
	va_end(strings_list);
	printf("\n");
}
