#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *a;

	a = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (a == NULL)
		return NULL;
	a[(ft_strlen(s1) + ft_strlen(s2))] = '\0';
	a = ft_strncpy(a, s1, (ft_strlen(s1) + 1));
	a = ft_strcat(a, s2);
	return a;
}
