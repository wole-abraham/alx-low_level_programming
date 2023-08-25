#include "main.h"
/**
 * _strncpy - copies char frm @src to @dest
 * @src: char poinyer
 * @n : number of char to be copied
 * @dest: char poinyyer
 * Description: ^^
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);

}
