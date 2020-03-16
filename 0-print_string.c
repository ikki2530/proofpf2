#include "holberton.h"


int print_string(va_list list)
{
	int i = 0, len = 0;
	char *p;

	p = va_arg(list, char*);
	for (i = 0; p[i] != '\0'; i++)
		len = len + pchar(p[i]);
	return (len);
}
