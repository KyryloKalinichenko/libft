#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	n;
	size_t			len_little;

	if (*little == '\0')
		return (char*)(big);
	n = 0;
	(void)len;
	len_little = ft_strlen(little);
	while (*big != '\0')
	{
		if (n + len_little > len)
			return (NULL);
		if (ft_strncmp(big, little, len_little) == 0)
			return (char*)(big);
		big++;
		n++;
	}
	return (NULL);
}
/*
char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		h1;
	int		h2;
	unsigned int		n2;

	if (*needle == '\0' || !ft_strlen(needle))
		return ((char*)haystack);
	h1 = 0;
	while (*(haystack + h1))
	{
		h2 = h1;
		n2 = 0;
		while (*(needle + n2) && *(haystack + h2) == *(needle + n2))
		{
			h2++;
			n2++;
		}
		if ((n2 + 1) == len)
			return ((char *)(haystack + h1));
		h1++;
	}
	return (NULL);
}

int	main(void)
{
	char *s1 = "MZIRIBMZIRIBMZE123";
        char *s2 = "MZIRIBMZE";
        size_t max = ft_strlen(s2);
        char *i2 = ft_strnstr(s1, s2, max);

	printf("%s\n", i2);
}*/
