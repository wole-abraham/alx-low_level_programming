int len_str(char *s)
{
	int len;
	if (*s != '\0')
	{


		s++;

		len = len + len_str(s+len);
