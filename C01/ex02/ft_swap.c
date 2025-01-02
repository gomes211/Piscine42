void    ft_swap(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
/*
#include <stdio.h>
int main()
{
    int a = 10;
    int b = 2;
    ft_swap(&a, &b);
    printf("%d\n%d", a, b);
    return 0;
}
*/