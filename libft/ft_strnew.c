#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *a;

	a = malloc(sizeof(char) * (size + 1));
	if (a == NULL)
		return (NULL);
	ft_bzero(a, size + 1);
	a[size] = '\0';
	return (a);
}
