#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 * @s: pointer the address in memory
 * @b: constant byte
 * @n: number of bytes of nenory to be filled
 * Description: ^^^
 * Return: address of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);


}


