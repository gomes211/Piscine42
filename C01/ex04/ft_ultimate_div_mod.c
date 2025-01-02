void    ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;

    div = *a / *b;
    mod = *a % *b;

    *a = div;
    *b = mod;
}
/*
#include <stdio.h>
int main()
{
    int a = 20;
    int b = 4;
    ft_ultimate_div_mod(&a, &b);
    printf("%d\n%d", a, b);
    return 0;
}
*/