#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers being inputed
 * @a: first value
 * @b: second value
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
