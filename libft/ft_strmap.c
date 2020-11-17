#include "libft.h"

char    *ft_strmap(char const *s, char (*f)(char))
{
        unsigned int i;
        char *a;

        i = 0;
        a = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (a ==  NULL)
		return (NULL);
        while (s[i])
        {
                a[i] = (*f)(s[i]);
                i++;
        }
	a[i] = '\0';
        return (a);
}

