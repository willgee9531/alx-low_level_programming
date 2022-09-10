#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)/** this specifies there are no arguments taken by main */
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
{
	putchar(ch);
}
putchar(10);
return (0);
}
