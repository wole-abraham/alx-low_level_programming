#include "main.h"
/**
 * _memcpy - function copies memory area
 * Description: ^^^^^
 * @dest: address to be copied to
 * @src: address of byte to be copied
 * @n: numbers of byte to be copied
 * Return: address of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
