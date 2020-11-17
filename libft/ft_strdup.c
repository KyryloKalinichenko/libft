#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *dup;
	int i;

	i = -1;
	dup = malloc(sizeof(char) * (ft_strlen((char*)s) + 1));
	if (dup == NULL)
		return NULL;
	while (s[++i])
		dup[i] = s[i];
	dup[i] = '\0';
	return (dup);
}
