#include "holberton.h"
#include <stdio.h>
/**
 * reverse - reverse and prints numbers
 * @n: receive a number
 * Return: Amount of digits of the number n
 */
int reverse(int n)
{
	int reverse_n = 0, last_number, cont = 0;

	if (n < 0)
		n = -n;
	while (n != 0)
	{
		last_number = n % 10;
		reverse_n = (reverse_n * 10) + last_number;
		n = n / 10;
	}
	while (reverse_n != 0)
	{
		last_number = reverse_n % 10;
		reverse_n = reverse_n / 10;
		print_char('0' + last_number);
		cont++;
	}
	return (cont);
}
/**
 *print_integer - print
 *@n: receive a number
 *Return: Amount of digits of the number n
 */
int print_integer(int n)
{
	int cont = 0;

	if (n > 0)
		cont = reverse(n);
	else if (n == 0)
	{
		print_char(n + '0');
		cont++;
	}
	else if (n < 0)
	{
		print_char(45);
		cont = reverse(n);
	}
	printf("Num of digits %i", cont);
	return (cont);
}

/**
 * reverse - reverse and prints numbers
 * @n: receive a number
 * Return: Amount of digits of the number n
 */
