#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
	unsigned char *n_s;
	n_s = s;
	while(n)
	{
		*n_s = '\0';
		n_s++;
		n--;
	}
}

int main(void)
{
	char s[13] = "Hello world";

	 ft_bzero(s + 2, 3*sizeof(char));
	 printf("%s\n", s);
	return 0;
}
