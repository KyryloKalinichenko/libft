#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	size_t			len_dst;

	i = 0;
	j = 0;
	len_dst = ft_strlen(dst);
	if (size == 0)
		return (ft_strlen(src));
	while (dst[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && i < size - 1)
		dst[i++] = src[j++];
	if (size != 0 && size >= len_dst)
		dst[i] = '\0';
	if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	return (ft_strlen(src) + len_dst);

	/*size_t i, j;

	j = 0;
	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dest[j] != '\0' && j < size)
		j++;
	while (size - 1 > j && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	if (size != 0 && size >= ft_strlen(dest))
		dest[j] = '\0';
	if (size < ft_strlen(dest))
		return (ft_strlen(src) + size);
	return (ft_strlen(dest) + ft_strlen(src));
	*/
}
