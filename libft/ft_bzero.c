#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *n_s;

	n_s = s;
	while (n)
	{
		*n_s = '\0';
		n_s++;
		n--;
	}
}
