int    ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }

    return i;
}
/*
#include <stdio.h>
int main()
{
    char str[] = "Hello";
    int result = ft_strlen(str);
    printf("%d", result);
    return 0;
}
*/