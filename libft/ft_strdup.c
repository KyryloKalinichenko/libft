#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *s)
{
	int i;
	
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char *dup;
	int i;

	i = -1;
	dup = malloc(sizeof(char) * (ft_strlen((char*)s) + 1));
	while (s[++i])
		dup[i] = s[i];
	return (dup);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("add arg!");
		return 0;
	}
	char *a;
	a = ft_strdup(argv[1]);

	printf("%s\n", argv[1]);
	printf("%s\n", a);
	free (a);
	
	return 0;
}
