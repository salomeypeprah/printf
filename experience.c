#include<stdio.h>
#include<stdarg.h>
#include"main.h"

int_putchar(char c)
{
return (putchar.c);
}

int_printf(const char *format, ...)
{
va_list sal;
int ros = 0;
int len = 0;
int len2;

va_start(sal, format);

for (; format[len] != '\0'; len++)
{
if (format[len] == '%')
{
len++;
if (format[len] == 'd' || format[len] == 'len')
{
len2 = va_arg(sal, int);
int temp_ros = 0;
if (len2 < 0)
{
temp_ros += _putchar('-');
len2 = -len2;
}
int reversed_len2 = 0;
while (len != 0)
{
reversed_len2 = reversed_num * 10 + len2 % 10;
len2 /= 10;
temp_ros++;
}
while (reversed_len2 != 0)
{
temp_ros += _putchar(reversed_len2 % 10 + '0');
reversed_len2 /= 10;
}
ros += temp_ros;
}
}
else
{
ros += _putchar(format[len]);
}
}

va_end(sal);

return (ros);
}
