int ft_strlen(char *src)
{
    unsigned int i;

    i = 0;
    while (src[i])
    {
        i++;
    }
    return i;
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;

    if (size == 0)
    {
        return ft_strlen(src);
    }

    i = 0;
    while (src[i] && (i < size - 1))
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
    return (ft_strlen(src));
}
/*
#include <stdio.h>
int main()
{
    char src[] = "Hello World!";
    char dest[20];
    int result = ft_strlcpy(dest, src, 8);
    printf("%d\n", result);
    printf("%s", dest);
    return (0);
}
*/