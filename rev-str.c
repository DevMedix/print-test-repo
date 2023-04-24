#include "main.h"

/**
 * rev_str - Prints the str in reverse
 * @arguments: Input string
 * @buf: Buffer pointer
 * @ibuf: Index for buffer pointer
 * Return: Numb of chars printed.
 */
int rev_str(va_list arguments, char *buf, unsigned int ibuf)
{
	char *str;
	unsigned int t;
	int j = 0;
	char nill[] = "(llun)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (t = 0; nill[t]; t++)
			ibuf = handl_buf(buf, nill[t], ibuf);
		return (6);
	}
	for (i = 0; str[i]; i++)
		;
	j = t - 1;
	for (; j >= 0; j--)
	{
		ibuf = handl_buf(buf, str[j], ibuf);
	}
	return (t);
}
