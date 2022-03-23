#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * struct prints - Struct printss
 * @formt: The operator
 * @f: The function associated
 */
typedef struct prints
{
	char *formt;
	int (*f)(va_list);
} struc;
int _putchar(char c);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_Upperhex(va_list args);
int print_Lowerhex(va_list args);
int print_addr(va_list args);
int print_rev(va_list args);
int print_rot13(va_list args);
char *convert(unsigned long int num, int base, int lowercase);
int print_percent(va_list);
int _printf(const char *format, ...);
int print_int(va_list);
int (*get_print_func(char c))(va_list);
int print_string(va_list);
int print_single(va_list);
int _atoi(char *s);
int _strcmp(char *s1, char *s2);
int _strlen_recursion(char *s);
void print_number(int n);
int count_digit(int i);
int _puts(char *str);
#endif

