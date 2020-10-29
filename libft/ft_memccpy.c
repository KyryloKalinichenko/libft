#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *d;
	const char *s;
	int i;

	d = dest;
	s = src;
	i = 0;
	while(n)
	{
		*d = *s;
		if (*s == c)
			return (d + 1);
		n--;
		s++;
		d++;
	}
	return (NULL);
}

int	main(void)
{
	char s[13] = "hello world";
	char d[13];

	printf("%s\n", ft_memccpy(d, s, 'w', 6*sizeof(char)));
	printf("%s\n", memccpy(d, s, 'w', 6*sizeof(char)));
	return 0;
}
