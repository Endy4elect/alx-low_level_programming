#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: char variable
 * Return: char
 */

char *rot13(char *s)
{
	int i = 0, j;
	char src[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char enc[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	while (s[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == src[j])
			{
				s[i] = enc[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
