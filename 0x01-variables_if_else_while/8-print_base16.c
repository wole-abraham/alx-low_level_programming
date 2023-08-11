#include <stdio.h>
/**
 * main - void
 * Description: hex 16
 * Return: 0
 */

int main(void)
{
	char x;

	for (x = 0; x <= 9; x++)
	{
		putchar('0' + x);
	}

	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);

}
