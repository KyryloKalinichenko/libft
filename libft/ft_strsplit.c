#include "libft.h"

/*char	**ft_split(char const *s, char c)
{
 	int i;
        int b;
	int k;
        char **a;

        i = -1;
	k = -1;
        b = (ft_strlen(s) - 1);
	a = malloc(sizeof(**char));
	while(b)
	{
        	if (s[++i] && s[i] != c)
			b--;
		else if (s[++i] == c)
		{
			a[++k] = ft_strsub(s, 0, i);
			s += i;
			i = 0;
		}
	}
        return (a);
}*/
