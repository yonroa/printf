#include "main.h"

/**
 * print_binary - prints a number in base 2
 * @args: va_list arguments from _printf
 * Return: the number of chars printed
 */
int print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 2, 0);

	return (_puts(str));
}

/**
 * print_unsigned - prints an unsigned integer
 * @args: va_list of arguments from _printf
 * Return: number of chars printed
 */
int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 10, 0);

	return (_puts(str));
}

/**
 * print_octal - prints a number in base 8
 * @args: va_list of arguments from _printf
 * Return: Number of chars printed
 */
int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 8, 0);

	return (_puts(str));
}

/**
 * print_Upperhex - prints a number in base 16(hexadecimal uppercase)
 * @args: va_list of arguments from _printf
 * Return: Number of chars printed
 */
int print_Upperhex(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 16, 0);

	return (_puts(str));
}

/**
 * print_Lowerhex - prints a number in base 16(hexadecimal Lowercase)
 * @args: va_list of arguments from _printf
 * Return: Number of chars printed
 */
int print_Lowerhex(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 16, 1);

	return (_puts(str));
}
