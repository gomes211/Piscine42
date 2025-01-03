int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] < 48 || str[i] > 57)
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
    char str[] = "33132311AA";
    int result = ft_str_is_numeric(str);
    printf("%d", result);
    return 0;
}
*/