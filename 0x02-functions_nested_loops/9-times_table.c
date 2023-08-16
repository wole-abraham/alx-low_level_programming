#include "main.h"

void times_table(void)
{
	int a;
	int b = 0;
	int c;


	while (a <= 9)
	{
		a = 1;
		while(b <= 12)
		{
			c = a * b;
			_putchar('0' + c);
			b++;

		}

	a++;
	}
}
