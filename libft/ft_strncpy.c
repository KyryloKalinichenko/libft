#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int i;
	const char *b;

	b = (char*)src;
	i = 0;
	while (b[i] != '\0' && n)
	{
		dest[i] = b[i];
		n--;
		i++;
	}
	while (n)
	{
		dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}

