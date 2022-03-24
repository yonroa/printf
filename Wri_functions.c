#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to printt
 * Return: On success 1
 */
int _putchar(char c)
{
	char buf[1024];
	int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 * Return: number of chars written
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_percent - prints a percent
 * @args: va_list arguments from _printf
 * Return: number of char printed
 */
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
