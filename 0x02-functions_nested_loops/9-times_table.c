#include "main.h"
#include <stdio.h>

void times_table(void)
{
	int a = 0;
	int b;


	while (a <= 9)
	{
		
		b = 0;
		while(b <= 9)
		{
			if((a*b == 0 && b == 0) && (a*b == 0 && a == 0))
			{
				printf("%d,", b * a);
			}

			else if (a*b >= 1 && a*b < 10 )
			{
				printf("  %d,", b * a);

			}
			else
				printf(" %d,", b * a);

			b = b + 1;
		
		}
		a++;
		printf("\n");

	}
}
