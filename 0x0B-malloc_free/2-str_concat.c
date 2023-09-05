#include <stdlib.h>
/**
 * str_concat - Entry poinnt
 * @s1: strig fi
 * @s2: string nd
 * Description: ^^^^^^^^^^^
 * Return: NULL or s
 */

char *str_concat(char *s1, char *s2)
{
	char *s;

	unsigned int i, j;

	s = malloc(sizeof(s1) + sizeof(s2) - 4);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}

	s[i] = '\0';

	return (s);

}

