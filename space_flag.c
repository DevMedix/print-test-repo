#include "main.h"

int space_flag(int value, int *printed_chars, int plus_flag)
{
	int chars = 0;

	if (value >= 0)
	{
		if (plus_flag)
		{
			_putchar('+');
			chars++;
		}
		else
		{
			putchar(' ');
			chars++;
		}
	}
	else
	{
		putchar('-');
		chars++;
		value = -value;
	}
	*printed_chars += chars;
	return value;
}
