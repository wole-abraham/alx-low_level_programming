#include "main.h"
/**
 * string_toupper - changes character from lower case
 *			to upper case
 * @s: pointer to sting
 * Description: ^^^^^
 * Return: Pointer to @s
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	i--;


	for (; i >= 0; i--)
	{
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{

			if (s[i] >= 'a' &&  s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
	}



	return (s);
}
