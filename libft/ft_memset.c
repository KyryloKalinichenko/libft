#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *n_str;

	n_str = s;
	while(n)
	{
		*n_str = c;
		n--;
		n_str++;
	}
	return s;
}
