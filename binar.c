#include <main.h>
#include <stdio.h>
#include <stdlib.h>

/**
* calc_bina - Converts numb to binary
* @numb: Numb converted
*/
void calc_bina(unsigned int numb)
{
if (numb > 1)
{
calc_bina(numb / 2);
}
_printf("%d", numb % 2);
}

/**
* print_bina - A funct checks and print numb in binary
* @format: The converted numb
*/

void print_bina(char *format, ...)
{
va_list args;
va_start(args, format);

char *t = format;
while (*t != '\0')
{
if (*t == '%')
{
switch (*(++t))
{
case 'b':
{
unsigned int num = va_arg(args, unsigned int);

calc_bina(numb);
break;
}
default:
{
_putchar(*t);
break;
}
}
}
else
{
_putchar(*t);
}
t++;
}
va_end(args);
}



