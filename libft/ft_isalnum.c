#include "libft.h"
//#include <ctype.h>
//#include <stdio.h>

int			ft_isalnum(int c)
{
	if(ft_isalpha(c)) 
		return 8;
	if(ft_isdigit(c))
		return 8;
	else
		return 0;
}
