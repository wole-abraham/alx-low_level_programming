#include "main.h"
/**
 * more_numbers - ededed
 * Return: 0
 */

void more_numbers(void)
{

	int i = 0;
	int b;

	while (i <= 10)
	{
		while (b <= 14)
		{
			if (b > 9)
				_putchar(b / 10 + '0');
			_putchar(b % 10  + '0');
			b++;
		}

		_putchar('\n');
		b = 0;
		i++;

	}

}
