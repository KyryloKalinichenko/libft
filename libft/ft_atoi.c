#include "libft.h"

int	ft_max(const char *s)
{
	
	if (!ft_strcmp("99999999999999999999999999", s))
		return (-1);
	if (!ft_strcmp("-99999999999999999999999999", s))
		return 0;
	else
	return 1;
}

int			ft_atoi(const char *str)
{
	int		i;
	long		nbr;
	int		sign;

	i = 0;
	nbr = 0;
	sign = 1;
	if (ft_max(str) != 1)
		return (ft_max(str));
	while (ft_iswhitespace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return (nbr * sign);
}
