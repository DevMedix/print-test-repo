#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_hex - Handles the conversion of hexa/oct
* @format: The char passed in
*/
void print_hex(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	for (int i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{

			case 'u' :, 'o' :
			{
				unsigned int num = va_arg(args, unsigned int);

				_printf("%u, %o", num, num);
			break;
			}
			case 'x':
			{
				unsigned int num = va_arg(args, unsigned int);

				convert_hex(num, 0);
			break;
			}
			case 'X':
			{
				unsigned int num = va_arg(args, unsigned int);

				convert_hex(num, 1);
			break;
			}
			default:
				_putchar('%');
				_putchar(format[i]);
			break;
		}
		else
			_putchar(format[i]);
	}
	va_end(args);
}
