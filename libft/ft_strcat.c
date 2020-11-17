#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char *a;
	int i;
	int p;

	i = 0;

	a = (char*)src;
	p = ft_strlen(a) + 1;
	while (dest[i] != '\0')
		i++;
	while (--p)
	{
		dest[i] = *a;
		i++;
		a++;
	}
	dest[i] = '\0';
	return dest;
}
