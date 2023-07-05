#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

#define BUFF_SIZE 1024

int _printf(const char *format, ...);
int get_flags(const char *format, int *index);
int get_width(const char *format, int *index, va_list list);
int get_precision(const char *format, int *index, va_list list);
int get_size(const char *format, int *index);
int handle_print(const char *format, int *index, va_list list, char buffer[],
		int flags, int width, int precision, int size);

#endif
