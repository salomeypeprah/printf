#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
* _putchar - a function that writes a character to stdout
* @c: the character to print
* Return: if successful return the number of characters written.
* if not successful, return -1.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
* _printf - a function that produces output according to a format
* @format: the character string
* Return: the number of characters printed excluding the NULL byte
*/
int _printf(const char *format, ...)
{
va_list sal;
int num = 0;
int len = 0;
int len2 = 0;
va_start(sal, format);
for (; format[len] != '\0'; len++)
{
if (format[len] == '%')
{
len++;
switch (format[len])
{
case 'c':
num += _putchar(va_arg(sal, int));
break;
case 's':
{
char *str = va_arg(sal, char *);
if (str == NULL)
str = "(null)";
for (; str[len2] != '\0'; len2++)
num += _putchar(str[len2]);
break;
}
case '%':
num += _putchar('%');
break;
default:
num += _putchar('%');
num += _putchar(format[len]);
break;
}
}
else
{
num += _putchar(format[len]);
}
}
va_end(sal);
return (num);
}
