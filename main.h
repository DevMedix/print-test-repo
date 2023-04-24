#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
_putchar(char c);




/*1. print_int.c__ handles the conversion of int*/
void print_int2(const char *input, ...);

/*2. Binar.c__calculates and prints in binary*/
calc_bina - Converts numb to binary;
void print_bina(char *format, ...);

/*3. hexa.c__ prints hexadecimal, convert then prints*/
void convert_hex(unsigned int numb, int uppercase);
void print_hex(const char* format, ...);

/* 4. using a local buffer to call write. */
void call_toBuffer(int fd, const char *str);

/* 5. Handling the custom conversion specifier S and non printable characters*/
void print_char(char t);/*single str*/
void print_string(char *str);

/* 11. zero-flag.c__ handles 0 flag character for non-custom*/
void zero_flag(const char *format, ...);

/*12. */


/*14. buf-handle.c/ print-rot_str.c__ handles concat to the buff and print rot*/
unsigned int buf_handle(char *buf, char c, unsigned int ibuf);
int print_rot_str(va_list arguments, char *buf, unsigned int ibuf);


#endif /* MAIN_H */
