#include "main.h"
#include <unistd.h>

/**
 * * print_number - prints # using _putchar function
 * * @n: the integer to print
 * *
 * * Return: void
 * */
int print_number(char *n)
{
	int i = 0, sum = 0;

	while (n[i] != '\0')
	{
		_putchar(n[i]);
		sum++;
		i++;
	}
	return (sum);
}

/**
 * print_string - Prints the string str
 * @str: String to be printed
 * Return: sum
 */
int print_string(char *str)
{
	int h = 0;
	int sum = 0;

	while (str[h] != '\0')
	{
		_putchar(str[h]);
		sum++;
		h++;
	}
	return (sum);
}

int print_single(char *c)
{
	char n = c[0];

	return (_putchar(n));
}
