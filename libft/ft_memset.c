#include <stdlib.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *n_str;

	n_str = s;
	while(n)
	{
		*n_str = c;
		n--;
		n_str++;
	}
	return s;
}

int main(void)
{
	char s[13] = "Hello world";
	
	printf("%s\n", ft_memset(s + 2, '.', 3*sizeof(char)));
	return 0;
}
