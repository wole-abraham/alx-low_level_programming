#include <stdio.h>

/**
 * main - void
 * Description: omo
 * Return: 0
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		if (a == 9)
		{
			putchar('0' + a);
		}

		else
		{
			putchar('0' + a);
			putchar(',');
		}

	}

	putchar('\n');

	return (0);


}
