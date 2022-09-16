#include <stdio.h>
#include "main.h"

/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}

	if (num > 9)
	{
		print_number(num / 10);
	}
	putchar(num % 10 + '0');
}
