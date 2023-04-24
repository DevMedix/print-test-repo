#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
* convert_hex - Converts to hex
* @numb: Entered numb
* @uppercase: ...
*/
void convert_hex(unsigned int numb, int uppercase)
{
	const char *digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

	if (numb > 15)
	{
		convert_hex(numb / 16, uppercase);
	}
	_putchar(digits[numb % 16]);
}
