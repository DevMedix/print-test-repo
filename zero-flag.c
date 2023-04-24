#include <main.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
*
*
*
*/

void zero_flag(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
			break;
			}
			if (*format == '%')
			{
				_putchar('%');
			continue;
			}
			if (*format == 'd' || *format == 'i' || *format == 'o' ||
                *format == 'u' || *format == 'x' || *format == 'X')
			{
				_printf("%0.*"PRIiMAX, (int)(format - (format - 1)), va_arg(args, intmax_t));
				format++;
			continue;
			}
				_printf("%%%c", *format);
		}
		else
		{
			_putchar(*format);
		}
		format++;
	}

	va_end(args);
}
