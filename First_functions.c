#include "main.h"


/**
 * count_digit - returns the number of digits in an integer
 * for _printf
 * @i: integer to evaluaate
 * Return: number of digits
 */
int count_digit(int i)
{
	unsigned int d = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}

/**
 * print_number - helper function that loops through
 * an integer and prints all its digits
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}

/**
 * print_string - Prints the string str
 * @args: String to be printed
 * Return: sum
 */
int print_string(va_list args)
{
	int h = 0;
	int sum = 0;
	char *str = va_arg(args, char *);

	while (str[h] != '\0')
	{
		_putchar(str[h]);
		sum++;
		h++;
	}
	return (sum);
}

/**
 * print_single - this is print
 * @args: this is args
 * Return: sum
 */

int print_single(va_list args)
{
	int n = va_arg(args, int);

	return (_putchar(n));
}

/**
 * print_int - this is print int
 * @args: this is args funtion
 * Return: sum
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int sum = count_digit(n);

	if (n <= 0)
	sum++;
		print_number(n);
	return (sum);
}
