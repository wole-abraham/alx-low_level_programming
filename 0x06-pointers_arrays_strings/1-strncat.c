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
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
