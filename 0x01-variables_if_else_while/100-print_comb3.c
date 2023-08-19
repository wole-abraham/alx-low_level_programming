#include <stdio.h>

int main(void)
{
	int a;
	int b;

	a = 0;

	while( a <= 8)
	{
	
		b = a;

		while (b < 9)
		{
			b = b + 1;
			putchar('0' + a);
			putchar('0'+ b);
			if (a != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}

		a++;



	}
	putchar('\n');

	return (0);
}	
