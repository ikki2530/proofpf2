/**
 * _printf - prints int, char, string, float
 * @format: string to print
 * Return: int value with string length
 */
int _printf(const char *format, ...)
{
        int i, j, cont;
        char c, c1;
        va_list lista;
        datat dtype[] = {
                {"c", print_char},
                {"s", print_string},
                {"i", print_int},
                {"d", print_d}
        };

        i = j = 0;
        va_start(lista, format);
        while (format != '\0' && format[i] != '\0')
        {
                c = format[i];
                j = 0;
                if (c == '%')
                {
                        c1 = format[i + 1];
                        while(j < 4)
                        {
                                if (c1 != '\0' && dtype[j].dt[0] == c1)
                                        cont += dtype[j].func(lista);
                                j++;
                        }
                        (c1 == '%') ? (_putchar(c1)) : (j++);
                }
                else
                {
                        _putchar(c);
                        cont++;
                }
                (j == 0) ? (i++) : (i += 2);
        }
        return (cont);
}
