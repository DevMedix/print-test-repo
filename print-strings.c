#include "main.h"
#include <stdio.h>

/**
* print_char - A prog that printssingle char
* @t: Char to be checked and printed
*
*/
void print_char(char t)
{
	if (t < 32 || t >= 127)
	{
		_printf("\\x%02X", t);
	}
	else
	{
		_putchar(t);
	}
}

/**
* print_string - A function that prints str
* @str: Str to be printed
*
*/

void print_string(char *str)
{
	for (int j = 0; str[j] != '\0'; j++)
	{
		print_char(str[j]);
	}
}
