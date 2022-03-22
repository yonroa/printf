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
	int (*f)(char *c);
} struc;
int _putchar(char c);
int _printf(const char *format, ...);
int print_number(char *n);
int (*get_print_func(char c))(char *);
int print_string(char *str);
int print_single(char *n);
int _atoi(char *s);
int _strcmp(char *s1, char *s2);
int _strlen_recursion(char *s);
#endif
