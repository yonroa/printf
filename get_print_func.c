#include "main.h"

/**
 * get_print_func - Select the correct format to print
 * @c: Character to be compared
 * Return: The string printed
 * NULL if the character is not found
 */
int (*get_print_func(char c))(va_list)
{
    int result;
    
	struc pri[] = {
		{"c", print_single},
		{"s", print_string},
		{"%", print_single},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};
	int i = 0;
	char *x = &c;

	while (pri[i].formt != NULL)
	{
		if (_strcmp(pri[i].formt, x) == 0)
		    return(pri[i].f);
		i++;
	}
	return (NULL);
}