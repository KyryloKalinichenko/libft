#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *a;
	unsigned char *b;

	a = (unsigned char*)s1;
	b = (unsigned char*)s2;
	while(n)
	{
		if (*a != *b)
			return (*a - *b);
		else
		{
			b++;
			a++;
		}
		n--;
	}
	return 0;
}
