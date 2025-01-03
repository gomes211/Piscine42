#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }

    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return (dest);
}
/*
int main()
{
    char src[] = "Hello";
    char dest[20];
    printf("%s", ft_strncpy(dest, src, 3));
    return 0;
}
*/