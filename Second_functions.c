#include "main.h"

/**
 * print_addr - Print an address in base 16(Hexadecimal lowercase)
 * @args: va_list arguments from _printf
 * Return: Number of chars printed
 */
int print_addr(va_list args)
{
	unsigned long int num = va_arg(args, unsigned long int);
	char *str;
	int sum = 0;

	if (!num)
		return (_puts("(nil)"));
	str = convert(num, 16, 1);
	sum += _puts("0x");
	sum += _puts(str);
	return (sum);
}

/**
 * print_rev - Prints a string in reverse
 * @args: va_list arguments from _printf
 * Return: Number of chars printed
 */
int print_rev(va_list args)
{
	int h, len;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";

	len = _strlen_recursion(str);
	for (h = len - 1; h >= 0; h--)
		_putchar(str[h]);
	return (len);
}

/**
 * print_rot13 - Prints a string in rot13
 * @args: va_list arguments from _printf
 * Return: Number of chars to be printed
 */
int print_rot13(va_list args)
{
	int i, h;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *str = va_arg(args, char *);

	for (h = 0; str[h]; h++)
	{
		if (str[h] < 'A' || (str[h] > 'Z' && str[h] < 'a') || str[h] > 'z')
			_putchar(str[h]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (str[h] == rot13[i])
					_putchar(ROT13[i]);
			}
		}
	}
	return (h);
}
