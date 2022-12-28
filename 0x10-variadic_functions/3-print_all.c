#include "variadic_functions.h"

/**
 * print_all - Entry point
 *
 * Description: Prints anything
 * @format: String containing format of the corresponding argument
 */

void print_all(const char * const format, ...)
{
	va_list strings;
	char *str, *separator = "";
	unsigned int i = 0;

	va_start(strings, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(strings, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(strings, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(strings, double));
				break;
			case 's':
				str = va_arg(strings, char *);
				if (str)
				{
					printf("%s%s", separator, str);
					break;
				}
				printf(", (nil)");
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	va_end(strings);
	printf("\n");
}
