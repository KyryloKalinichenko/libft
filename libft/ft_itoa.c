#include "libft.h"
#include <stdio.h>

int	ft_len(int n)
{
	int k;
	int p;

	k = 1;
	p = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		k++;
	}
	else
	{
		while (n > 9)
		{
			n /= 10;
			k++;
		}
	}
	return (k + p);

}

char	*ft_itoa(int n)
{
	char *s;
	int p;
	int k;

	p = ft_len(n);
	printf("%i\n", p);
	k = -1;
	s = malloc(sizeof(char) * (p + 1));
	if (s == NULL)
		return (NULL);
	while(s[++k] != '\0')
	{
		if (n < 0)
			s[k] = '-';
		else
		{
			s[k] = ((n % 10) + 48);
			n -= n % 10;
			printf("%c\n", s[k]);
		}
	}
	s[p] = '\0';
	return (s);
}

int	main(void)
{
	int i = 10;

	while(i++ < 20)
	{
		printf("%s\n", ft_itoa(i));
		//printf("%i\n", i);
	}
	return 0;
}
