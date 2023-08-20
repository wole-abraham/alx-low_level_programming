#include "main.h"
#include <stdio.h>

void times_table(void)
{
	int a = 0;
	int b = 0;
	int c;


	while (a <= 9)
	{
		
		while(b <= 12)
		{
			c = a * b;
			printf("%d", c);
			b++;
			_putchar('\n');

		
		}

		_putchar('\n');

		b = 0;
		a++;

	}
}
