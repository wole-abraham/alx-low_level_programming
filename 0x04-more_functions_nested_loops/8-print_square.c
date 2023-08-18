#include "main.h"
/**
 * print_square - prints a square
 * Description: program
 * @size: paramter
 */

void print_square(int size)

{
	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
	int a = 1;

	while (a <= size)
	{
		int b = 1;

		while (b <= size)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');

		a++;
	}

	}
}
