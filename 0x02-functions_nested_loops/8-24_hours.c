#include "main.h"

void main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	
	while (a <= 0)
	{
		while(b <= 0)
		{
			_putchar('0' + b);
			b++;
	
			while (c <= 0)
			{
		
				_putchar(':');
				_putchar('0' + c);
				c++;
				while(d <= 0)
				{
					_putchar('0' + d);
					d++;
				}
			}
		}

		_putchar('0' + b);
		a++;
	}
}

