#include "libft.h"
//#include <stdio.h>

int	ft_len(long n)
{
	long k;
	long p;

	k = 1;
	p = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		k++;
	}
	while (n > 9)
	{
		n /= 10;
		k++;
	}
	return (k + p);

}

char	*ft_itoa(int n)
{
	char *s;
	int p;
	long k;

	k = n;
	p = ft_len(k);
	s = malloc(sizeof(char) * (p + 1));
	if (s == NULL)
		return (NULL);
	s[p] = '\0';
	if (k == 0)
		s[0] = '0';
	if (k < 0)
	{
			s[0] = '-';
			k *= -1;
	}
	while(k > 0)
	{
		p--;
		s[p] = ((k % 10) + 48);
		k /= 10;
	}
	return (s);
}
/*
int	main(void)
{
	int i = -10;

	while (i++ < 20)
		printf("%s\n", ft_itoa(-2147483647 -1));
	return 0;
}*/
