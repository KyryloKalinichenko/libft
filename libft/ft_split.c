#include "libft.h"
#include <stdio.h>

int	ft_count(char const *s, char c)
{
	int i;
	int k;

	i = -1;
	k = 0;
	while(s[++i] != '\0')
	{
		if(s[i] != c && (s[i + 1] == c ||s[i + 1] == '\0'))
			k++;
	}
	if (s[0] != c)
		k -= 1;
//	printf("%i\n", k);
	return (k);
}

char	**ft_split(char const *s, char c)
{
	int i;
	int j;
	int k;
	char **splited;

	i = 0;
	j = 0;
	k = 0;
	splited = malloc(sizeof(char*) * ft_count(s, c));
	if (splited == NULL)
		return NULL;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		while(s[i] != c && s[i] != '\0')
		{
			j++;
			i++;
		}
//		printf("%i is i\n %i is j\n ", i, j);
		splited[k] = ft_substr(s, i - j, j);
	//	printf("%s\n", splited[k]);
		if (splited[k] == NULL)
			return NULL;
		j = 0;
		k++;
	}
//	printf("%i\n", k);
	splited[k] = NULL;
	return (splited);
}
/*
int	main(void)
{
	int i = -1;
	char *string = "    split this  for   me     !        ";
        char **result = ft_split(string, ' ');

	while (result[++i] != NULL)
	{
		printf("%s\n", result[i]);
	}
	free (result);
	return 0;
}*/
