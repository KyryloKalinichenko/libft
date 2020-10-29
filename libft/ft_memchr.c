#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *a;

	a = (unsigned char*)s;
	while(n)
	{
		if (*a == (unsigned char)c)
			return (a);
		n--;
		a++;
	}
	return (NULL);
}

int	main(void)
{
	char s[13] = "hello world";
	char d[13];

	printf("%s\n", ft_memchr(s, ' ', 6*sizeof(char)));
	printf("%s\n", memchr(s, ' ', 6*sizeof(char)));
	return 0;
}

