char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
        i++;
    }
    return (str);
}
/*
#include <stdio.h>
int main()
{
    char str[] = "hello World";
    printf("%s", ft_strupcase(str));
    return 0;
}
*/