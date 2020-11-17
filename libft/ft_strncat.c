#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char *a;
	int i;
	int p;

	i = 0;

	a = (char*)src;
	p = ft_strlen(a) + 1;
	while (dest[i] != '\0')
		i++;
	while (--p && n)
	{
		dest[i] = *a;
		i++;
		a++;
		n--;
	}
	dest[i] = '\0';
	return dest;
}

