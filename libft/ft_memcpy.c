#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *d;
	const char *s;

	d = dest;
	s = src;
	if (dest == NULL && src == NULL)
		return (NULL);

	while(n)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}
