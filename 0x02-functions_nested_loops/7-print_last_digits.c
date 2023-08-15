#include "main.h"
/**
 * print_last_digit - function that prints the last digit
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */

int print_last_digit(int c)
{
	int b;

	if (c < 0)
	{
		b = ((c * -1) % 10);
		_putchar('0' + b);
	}

	else
	{
		b = c % 10;
		_putchar('0' + b);

	}



	return (0);

}
