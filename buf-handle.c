#include "main.h"

/**
 * buf_handle - Concats the buffer chars
 * @buf: Buffer pointer
 * @c: Char to concatenate
 * @ibuf: Index of buffer pointer
 * Return: Index of buffer pointer.
 */
unsigned int buf_handle(char *buf, char c, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
		print_buf(buf, ibuf);
		ibuf = 0;
	}
	buf[ibuf] = c;
	ibuf++;
	return (ibuf);
}
