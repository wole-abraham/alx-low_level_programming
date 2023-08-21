#include "main.h"
/**
 * swap_int - pointers
 * @a: pointer
 * @b: pointer
 * Description: swaps the value a the addresses
 * Return:
 */

void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;

}

