#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints
 * @format:  arguments
 */
void print_all(const char * const format, ...)
{
int k = 0;
char *stl, *qpr = "";

va_list list;

va_start(list, format);

if (format)
{
while (format[k])
{
switch (format[k])
{
case 'c':
printf("%s%c", qpr, va_arg(list, int));
break;
case 'i':
printf("%s%d", qpr, va_arg(list, int));
break;
case 'f':
printf("%s%f", qpr, va_arg(list, double));
break;
case 's':
stl = va_arg(list, char *);
if (!stl)
stl = "(nil)";
printf("%s%s", qpr, stl);
break;
default:
k++;
continue;
}
qpr = ", ";
k++;
}
}

printf("\n");
va_end(list);
}

