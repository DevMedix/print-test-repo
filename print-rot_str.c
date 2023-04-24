#include "main.h"

/**
 * print_rot - Prints str in ROT13
 * @arguments: Input string
 * @buf: Buff pointer
 * @ibuf: Index of buff pointer
 * Return: Numb of chars printed.
 */

int print_rot_str(va_list arguments, char *buf, unsigned int ibuf)
{
	char mem[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;
	unsigned int t, j, k;
	char nill[] = "(avyy)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (t = 0; nill[t]; t++)
			ibuf = handl_buf(buf, nill[t], ibuf);
		return (6);
	}
	for (t = 0; str[t]; t++)
	{
		for (k = j = 0; mem[j]; j++)
		{
			if (str[t] == mem[j])
			{
				k = 1;
				ibuf = handl_buf(buf, rot[j], ibuf);
				break;
			}
		}
		if (k == 0)
			ibuf = handl_buf(buf, str[t], ibuf);
	}
	return (i);
}
