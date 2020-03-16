#include "holberton.h"

int convert_char(va_list list)
{
	char c;
	int len = 0;

	c = va_arg(list, char);
	len = print_char(c);
	return (len);
}

int convert_string(va_list list)
{
	char *s;
	int len = 0;

	s = va_arg(list, char *);
	len = print_string(s);
	return (len);
}
