#include "main.h"

/**
 * _printf - A function to print
 * @format: Format to print
 * Return: Lenght of the string
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, tmp;
	int sum = 0;
	char *str;
	int (*result)(char *);
	
	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			sum++;
		}
		else
		{
			str = va_arg(args, char *);
			result = get_print_func(format [i + 1])(str);
			tmp = result(str);
			sum += tmp;
			i++;
		}
		i++;
	}
	va_end(args);
	return (sum);
}
