#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 */

void print_alphabet(void)
{
	int letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n')
}
