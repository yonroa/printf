#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct prints - Struct prints
 * @op: The operator
 * @f: The function associated
 */
typedef struct prints
{
	char *formt;
	int (*f)(char c);
} struc;
int _putchar(char c);
int _printf(const char *format, ...);
void print_number(int n);
int (*get_print_func(char *c))(char *string);
int print_string(char *str);
#endif
