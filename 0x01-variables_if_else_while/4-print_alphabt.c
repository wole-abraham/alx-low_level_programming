#include <stdio.h>
/**
 * main - void
 * Description: prints all letters except e and q
 * Return: zero
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
	}

	putchar('\n');

	return (0);

}
