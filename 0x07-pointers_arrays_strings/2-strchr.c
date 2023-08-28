#include "main.h"

/**
 * _strchr - locates a charcter in a string
 * Description: ^^^
 * @s: address to be searched
 * @c: charactr to be loacted
 * Return: p
 */

char *_strchr(char *s, char c)
{
	char *p;
	int i;

	i = 1;

	while (i == 1)
	{
		if (*s == c)
		{
			p = s;
			break;
		}


		else if (*s == '\0')
		{
			p = 0;
		}

		else
			s++;

	}



	return (p);

}
