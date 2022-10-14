#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @seperator: The string to be printed between strings
 * @n: The number of strings passed to the function
 * @...: A variable number of strings to be printed
 *
 * Description: If seperator is NULL, it is not printed
 *		If one of the strings if NULL, (nil) is printed instead
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list strings;

	unsigned int i;

	char *ptr;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(strings, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
		{
			printf("%s", ptr);
			if (i < n - 1 && seperator != NULL)
				printf("%s", seperator);
		}
	}

	va_end(strings);
	printf("\n");
}
