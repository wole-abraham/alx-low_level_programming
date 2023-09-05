#include <stdlib.h>
/**
 * _strdup - Entry Pount
 * @str: str to ve copied
 * Description: ^^^^^^
 * Return: s or NUL
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int size;

	if (str == NULL)
		return (NULL);

	size = 0;
	for (; str[size] != '\0'; size++)
	{
	}

	size++;

	s  = malloc(size * sizeof(char));


	if (s == NULL)

		return (NULL);

	size = 0;
	for (; str[size] != '\0'; size++)
		s[size] = str[size];
	s[size] = str[size];

	return (s);

}




