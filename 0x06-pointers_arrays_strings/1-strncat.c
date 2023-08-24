#include "main.h"
/**
 * _strncat - similar to the _strncat function,
 * except it will only append @n bytes to @dest
 * Description: ^^^^
 * Return: Pointer @dest
 * @dest: pointer to string
 * @src: pointer ^^^^
 * @n: number of bytes
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}


	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
	}

	return (dest);

}

