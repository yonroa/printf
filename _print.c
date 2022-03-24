#include "main.h"

/**
 * _printf - A function to printt
 * @format: Format to print
 * Return: Lenght of the string
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int sum = 0;
	int tmp;
	int (*result)(va_list);

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			sum++;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				sum += _putchar('%');
			}
			else
			{
				result = get_print_func(format[i + 1]);
				tmp = (result) ? result(args) : _printf("%%%c", format[i + 1]);
				sum += tmp;
			}
			i++;
		}
		i++;
	}
	_putchar(-1);
	va_end(args);
	return (sum);
}
