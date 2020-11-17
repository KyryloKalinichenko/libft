#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	const char *b;
	int i;

	b = (char*)src;
       	i = 0;	
	if (ft_strlen(dest) < ft_strlen(b))
		return (dest);
	else
	{
		while (b[i])
		{
			dest[i] = b[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
}

