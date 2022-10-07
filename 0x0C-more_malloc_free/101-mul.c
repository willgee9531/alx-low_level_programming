#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;

	return (i);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: arrays of arguments
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	unsigned long int num1, num2, res;

	int len_num1, len_num2;

	len_num1 = _strlen(argv[1]);
	len_num2 = _strlen(argv[2]);

	for (i = 0; i <)

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	res = mul(num1, num2);
	printf("%d", res);
}
