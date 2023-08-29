#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: pointer
 * @accept: poinyyer
 * Description: ^^
 * Return: @c or 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *c;


	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == *s)
			{
				c = s;
				break;
			}

		}


		if (accept[j] == *s)
			break;
		else if (accept[j] != *s)
		{
			s++;
			c = 0;
		}
	}

	return (c);

}
