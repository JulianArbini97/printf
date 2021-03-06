#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>


/**
 * struct pter - Short description
 * @test: First member
 * @printer: Second member
 * Description: Longer description
 */

typedef struct pter
{
char *test;
int (*printer)();
} pt;

int print_char (va_list);
int print_percent(va_list);
int print_string(va_list);
int print_int (va_list);
int _printf(const char *format, ...);
int _strlen(char *s);
int _put_char(char);
int print_binary(va_list);
#endif
