#include "main.h"

int plus_flag(int value, int *printed_chars)
{
	int chars = 0;

	if (valur >= 0)
	{
		_putchar('+');
		chars++;
	}
	else
	{
		_putchar('-');
		chars++;
		value = -value
	}
	*printed_chars += chars;
	return (value);
}
