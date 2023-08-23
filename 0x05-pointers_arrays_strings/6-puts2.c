#include "main.h"
/**
 * puts2 - prints every other character
 * Description: ^^^^
 * @str:pointer
 * Return:
 */

void puts2(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)

	i = i - 1;

	for (j = 0; j <= i; j++)
	{
		if (j == 0)
		{
			_putchar(str[j]);
		}

		else if (j % 2 == 0)
		{
			_putchar(str[j]);
		}

	}

	_putchar('\n');

}

