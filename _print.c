#include "main.h"


/**
 * _printf - A function to print
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
	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			sum++;
		}
		else
		{   
		    result = get_print_func(format[i + 1]);
		    tmp = result(args);
		    if (!tmp)
		        printf("ERROR");
		 
		   if (format[i + 1] == '%')
		   {
                _putchar('%');
		   }
		    sum += tmp;
		    i++;
		}
	    i++;
	}
	va_end(args);
	return (sum);
}
