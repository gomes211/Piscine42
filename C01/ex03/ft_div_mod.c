void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}
/*
#include <stdio.h>
int main()
{
    int a = 10;
    int b = 2;
    int div = a / b;
    int mod = a % b;
    ft_div_mod(a, b, &div, &mod);
    printf("%d\n%d", div, mod);
    return 0;
}
*/