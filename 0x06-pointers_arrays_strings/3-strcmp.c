#include "main.h"
/**
 * _strcmp - compared
 * Description: cmopar
 * @s1: char
 * @s2: char
 * Return: interger
 */

int _strcmp(char *s1, char *s2)
{
	int i;


	if (s1[0] == s2[0])
		i = 0;

	else if (s1[0] > s2[0])
	{
		i = (s2[0] - s1[0]) *  -1;

	}

	else if (s1[0] < s2[0])
	{
		i = s1[0] - s2[0];
	}

	return (i);

