#include <stdio.h>
/**
 * main - entry point
 * Description: Every possible  digit numbers without repetiton
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	a = 0;

	while (a <= 7)
	{
		b = a;

		while (b < 8)
		{
			b = b + 1;

			c = b;

			while (c < 9)
			{
				c = c + 1;
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
				if (a != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}


		a++;
	}

	putchar('\n');

	return (0);

}




