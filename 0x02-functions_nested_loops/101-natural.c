#include <stdio.h>
/**
 * main - entry point
 * Description: natural  numbers
 * Return: 0
 */

int main(void)
{
	int a = 1;
	int b = 0;

	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			b = b + a;

		}




		a++;


	}

	printf("%d", b);
	printf("\n");


	return (0);

}
