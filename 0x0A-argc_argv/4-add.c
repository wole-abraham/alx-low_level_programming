#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int i;
	int c, d;
	int sum = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (c = 1; c < argc; c++)
	{
		for (d = 0; argv[c][d] != '\0'; d++)
		{
			if (argv[c][d] < '0' || argv[c][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

	}



	for (i = 1; i < argc; i++)
		sum = sum + atoi(argv[i]);

	printf("%d", sum);

	return (0);

}







