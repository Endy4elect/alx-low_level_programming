#include "main.h"
/**
 * print_alphabet_x10 - alphabet 10 times
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	
	while (i < 10);
	{
		char c;
		
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar (c);
		}
		_putchar ('\n');
		i++;
	}
}
