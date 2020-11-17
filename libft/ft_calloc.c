#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char *arr;

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, nmemb * size);
	return (arr);
}
