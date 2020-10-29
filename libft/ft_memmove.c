#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char a;
	char *d;
	const char *s;

	d = dest;
	s = src;

	while (n)
	{
		a = *s;
		*d = a;
		s++;
		d++;
		n--;
	}
	return (dest);
}

int main(void)
{
/*	char s[13] = "hello world";
	char k[13];

	printf("%s\n", ft_memmove(k, s, 5*sizeof(char)));
	printf("%s\n", memmove(k, s, 5*sizeof(char)));
			return 0;
}*/

 char str[100] = "Learningisfun";
    char *first, *second;
    first = str;
    second = str;
    printf("Original string :%s\n ", str);

    // when overlap happens then it just ignore it
    ft_memmove(first + 8, first, 10);
    printf("memcpy overlap : %s\n ", str);

    // when overlap it start from first position
    memmove(second + 8, first, 10);
    printf("memmove overlap : %s\n ", str);
    return 0;
    }
