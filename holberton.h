#ifndef HOLBERTON_H
#define HOLBERTON_H

int print_char(char);
int print_string(char *);

int convert_char(va_list list);
int convert_string(va_list list);

typedef struct find
{
	char *type;
	void (*conver)();
	int (*print)();
}struct_find

#endif
