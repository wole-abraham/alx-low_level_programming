#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - entry point
 * @n: parameter
 * Descrition from n to 98
 * Return: 0
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}

	else if (n < 98)
	{
		printf("%d, ", n);
		while (n++ != 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d,         ", n);
		}
	}

	else if (n > 98)
	{
		printf("%d, ", n);
		while (n-- != 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
		}
	}




}
