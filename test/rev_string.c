#include <stdio.h>

int rev_string(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + rev_string(s));
	}


		
}


int main(void)
{
	int i;

	char *string = "hello";
	i = rev_string(string);

 	printf("%d", i);

	return (0);

}
