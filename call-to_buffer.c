#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* call_toBuffer - Calls str to buffer
* @fd: Str dest
* @str: Str to be called
*
*/
void call_toBuffer(int fd, const char *str)
{
	char buffer[1024];
	size_t length = strlen(str);
	size_t offset = 0;
	size_t remaining = length;

	while (remaining > 0)
	{
	size_t chunkSize = remaining > 1024 ? 1024 : remaining;

	memcpy(buffer, str + offset, chunkSize);
	write(fd, buffer, chunkSize);
	remaining -= chunkSize;
	offset += chunkSize;
	}
}
