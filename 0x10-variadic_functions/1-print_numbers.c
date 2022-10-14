#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 * @seperator: The string to be printed between numbers
 * @n: The number of integes passed to the functions
 * @...: A variable number of numbers to be printed
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, unsigned int));

		if (i < (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}

	va_end(numbers);
	printf("\n");
}
