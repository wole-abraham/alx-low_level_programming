#include <stdio.h>
/**
 * main - void
 * Description: uses a for loop around the putchar to print alphabet to output
 * Return: 0
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
