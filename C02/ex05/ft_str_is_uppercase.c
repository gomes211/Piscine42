int    ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] < 65 || str[i] > 90)
        {
            return (0);
        }
        i++;
    }
    return (1);
}
/*
#include <stdio.h>
int main()
{
    char str[] = "HELLO";
    int result = ft_str_is_uppercase(str);
    printf("%d", result);
    return 0;
}
*/