#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

/**
* typedef struct format- defines a structure for symbols and functions
*
* @ros: a format
* @f: The function associated with the format
*/
typedef struct format;
{
char *ros;
int (*f)(va_list);
}
typedef struct format;

/*Main functions*/

int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_int(va_list);
int print_S(va_list);
int print_unsigned(va_list);
int address(va_list);
int print_binary(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_Hex(va_list list);
unsigned int space_flag  :1
unsigned int hastag_flag  :1
unsigned int zero_flag   :1
unsigned int minus_flag  :1
unsigned int width
unsigned int precision
unsigned int h_modifier  :1
unsigned int l_modifier  :1
int print_rev(va_list.);
int print_rot13(va_list.);
char *convert(long int num, int base, int flag….);

/*Support functions*/
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsigned_number(unsigned int);

#endif
