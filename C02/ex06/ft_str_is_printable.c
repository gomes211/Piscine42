int    ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] < 32 || str[i] > 126)
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
    char str[] = "hello\t\n 00  22";
    int result = ft_str_is_printable(str);
    printf("%d", result);
    return (0);
}
*/