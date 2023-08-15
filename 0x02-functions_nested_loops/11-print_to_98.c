#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - checks if  is a alphabet
 * @n: interger
 * Description: above
 * Return: none
 */

void print_to_98(int n)
{
	int a;
	for (a = n; a <= 98; a++)
	{
		printf("%d, ", a);
	}

	_putchar('\n');

}
