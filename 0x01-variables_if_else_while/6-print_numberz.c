#include <stdio.h>
/**
 * main - void
 * Description: prints 0-9
 * Return: 0
 */

int main(void)
{
	int x;
	int c;

	for (x = 0; x <= 9; x++)
	{
		c = x + '0';
		putchar(c);
	}

	putchar('\n');

	return (0);
}
