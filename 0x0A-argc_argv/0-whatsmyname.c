#include <stdio.h>
/**
 * main - Entry point
 * @argc: arguement count
 * @argv: arguement vector
 * Return: always 0
 * Description: prints the name of the program
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
