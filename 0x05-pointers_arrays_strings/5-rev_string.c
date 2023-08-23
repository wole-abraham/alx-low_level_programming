#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: point to address
 * Return:
 * Description: reverses a string through pointers
 */

void rev_string(char *s)
{
	int i, l;
	char *begin_ptr, *end_ptr, ch;


	begin_ptr = s;
	end_ptr = s;


	for (i = 0; s[i] != '\0'; i++)
	{
		end_ptr++;
	}

	end_ptr--;

	i = i - 1;

	for (l = 0; l < i / 2; l++)
	{
		ch = *begin_ptr;
		*begin_ptr = *end_ptr;
		*end_ptr = ch;

		begin_ptr++;
		end_ptr--;
	}

}
