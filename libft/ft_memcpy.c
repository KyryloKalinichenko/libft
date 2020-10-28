#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *d;
	const char *s;

	d = dest;
	s = src;

	while(n)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}

int main(void)
{
	char s[13] = "hello world";
	char k[13];

	printf("%s\n", ft_memcpy(k, s, 5*sizeof(char)));
			return 0;
}
