#ifndef HOLBERTON_H
#define HOLBERTON_H

int pchar(char c);
int print_string(va_list list);
typedef struct newdatatype
{
        char *dt;
        int (*func)();
} datat;


#endif
