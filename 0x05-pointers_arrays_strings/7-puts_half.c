#include "main.h"
/**
 * puts_half - prints half of the string
 * Description: ^^^^
 * @str: pointer to  string
 * Return:
 */

void puts_half(char *str)
{
	int i;
	int j;
	int k;

	for (i = 0; str[i] != '\0'; i++)
	{

	}


	if (i % 2 == 0)
	{
		i = i - 1;
		j = i + 1;
		k = j / 2;
		for (; k <= j; k++)
		{
			_putchar(str[k]);
		}
	}

	else if (i % 2 != 0)
	{
		j = i;
		k = (i - 1) / 2;

		for (; n <= j; k++)
		{
			_putchar(str[n]);
		}

	}



}
