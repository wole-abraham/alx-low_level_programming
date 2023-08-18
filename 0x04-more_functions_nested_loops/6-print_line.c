#include "main.h"

/**
 * print_line - prints n number of lins
 * @n: number of lines
 * Description: above
 */

void print_line(int n)
{
	int a = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else if (n > 0)
	{
		while (a <= n)
		{
			_putchar('_');
			a++;
		}

		_putchar('\n');

	}
}
