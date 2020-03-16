#include "holberton.h"

int find(char *data, va_list list)
{
	int i = 0;
	int len = 0;
        struct_find finder[] = {
                {"c", conver_char},
                {"s", conver_string},
                {"i", conver_int},
                {"d", conver_d}
        };

	for (i = 0; i < 4; i++)
	{
		if (finder[i].type[0] == *data)
			len = finder[i].print[0];
	}
	return (len);
}
