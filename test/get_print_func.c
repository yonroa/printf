#include "main.h"

/**
 * get_print_func - Select the correct format to print
 * @c: Character to be compared
 * Return: The string printed
 * NULL if the character is not found
 */
int (*get_print_func(char *c))(char *string)
{
	struc pri[] = {
		{"c", _putchar},
		{"s", print_string},
		{"%", _putchar},
		{"d", print_number},
		{"i", print_number},
		{NULL, NULL}
	};
	int i = 0;

	while (pri[i].formt != NULL)
	{
		if (strcmp(pri[i].formt, c) == 0)
			return (pri[i].f);
		i++;
	}
	return (NULL);
}
