#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
/*	unsigned char *d;
	unsigned char *s;
	size_t i;

	if(dest == NULL && src == NULL)
		return (NULL);

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if(src < dest)
	{
		i = n;
		while (i > 0)
		{
			d[n - i] = s[n - i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);*/

	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	if(dst == NULL && src == NULL)
                return (NULL);

	ptr = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	i = 0;
	if (ptr2 < ptr)
		while (++i <= len)
			ptr[len - i] = ptr2[len - i];
	else
		while (len-- > 0)
			*(ptr++) = *(ptr2++);
	return (dst);
}
