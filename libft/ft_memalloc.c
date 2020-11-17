#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *a;

	a = malloc(sizeof(size));
	if (a == NULL || size >= 9223372036854775807L)
		return NULL;
	ft_bzero(a, size);
	return (a);
}
