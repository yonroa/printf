#include "main.h"

/**
 * get_print_func - Select the correct format to print
 * @c: Character to be compareed
 * Return: NULL if there is not matches
 */
int (*get_print_func(char c))(va_list)
{
	struc pri[] = {
		{"c", print_single},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{"%", print_percent},
		{"b", print_binary},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_Lowerhex},
		{"X", print_Upperhex},
		{"p", print_addr},
		{"r", print_rev},
		{"R", print_rot13},
		{"S", print_S},
		{NULL, NULL}
	};
	int i = 0;
	char *x = &c;

	while (pri[i].formt != NULL)
	{
		if (_strcmp(pri[i].formt, x) == 0)
			return (pri[i].f);
		i++;
	}
	return (NULL);
}
