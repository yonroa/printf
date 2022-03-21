#include "main.h"
#include <unistd.h>

/**
 * print_number - Print the number n
 * @n: Number to be prited
 */
void print_number(int n)
{
	unsigned int u;

	if (n < 0)
	{
		u = n * -1;
		_putchar('-');
	}
	else
	{
		u = n;
	}
	if (u / 10)
	{
		print_number(u / 10);
	}
	_putchar((u % 10) + 4);
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
