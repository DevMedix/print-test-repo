#include "main.h"

int hash_flag(unsigned int value, int *printed_chars)
{
	int chars = 0;

	if (value != 0)
	{
		_putchar('0');
		chars++;
	}
	*printed_chars += chars;
	return (value);
}
