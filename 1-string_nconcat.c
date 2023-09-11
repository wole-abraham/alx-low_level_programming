#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ctr;
	unsigned int i, j;

	ctr = malloc(sizeof(*s1) +  n);

	if (ctr == NULL)
		return (NULL);

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	

	for (i = 0; s1[i] != '\0'; i++)
		ctr[i] = s1[i];

	i++;

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	if (n > j)
	{
		for (j = 0;  s2[j] != '\0'; j++)
		{
			ctr[i] = s2[j];
			i++;
		}

		return (ctr);
	}


	for (j = 0; j < n; j++)
	{
		ctr[i] = s2[j];
		i++;
	}

	ctr[i] = '\0';

	return (ctr);


}




