#include <stdio.h>

void rev(char *s)
{
	if( *s != '\0')
	{
		printf("%c", *s);
		s++;
		rev(s);
	}
	else
		printf("\n");

}

int main(void)
{
	char *string = "hey there";

	rev(string);

	return (0);

}
