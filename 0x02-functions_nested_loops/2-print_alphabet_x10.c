#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabtes 10 times
 * Description: below
 */

void print_alphabet_x10(void)
{
	char c;
	int x = 0;

	while (x < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');

		x++;
	}
}
