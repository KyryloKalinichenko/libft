#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int			ft_isalnum(int c)
{
	if(ft_isalpha(c)) 
		return 8;
	if(ft_isdigit(c))
		return 8;
	else
		return 0;
}

int main(void)
{
	int i;

	i = -100;
	while (i < 530)
	{
		if (isalnum(i) != ft_isalnum(i))
		{
			printf("%i\n", i);
			printf("%i\n", ft_isalnum(i));
		}
		i++;
	}
}
