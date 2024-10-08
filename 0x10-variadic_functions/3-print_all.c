#include "variadic_functions.h"

/**
 * print_all - prints all kind of formats
 * @char *: type of str
 * @format: type of strings
 * @...: formats to print
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *str, *separator = "";


	va_start(ap, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	va_end(ap);
	printf("\n");
}
