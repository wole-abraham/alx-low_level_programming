#include "main.h"
#include <stdio.h>
/**
 * print_rev - rev char
 * Description: above
 * Return:
 * @s: param
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%d, \n", i);
	}

	i = i - 1;


	for (; i >= 0; --i)

	{
		_putchar(s[i]);

	}

	_putchar('\n');

}
