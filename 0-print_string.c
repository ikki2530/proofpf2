#include "holberton.h"


int print_string(char *s)
{
	int i = 0, len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len = len + print_char(s[i]);
	return (len);
}
