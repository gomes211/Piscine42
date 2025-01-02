void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int aux;
    int end;

    end = size - 1;

    i = 0;
    while (i < (size / 2))
    {
        aux = tab[i];
        tab[i] = tab[end];
        tab[end] = aux;
        i++;
        end--;
    }
}
/*
#include <stdio.h>
int main()
{
    int tab[] = {10, 3, 55, 11, 2, 1, 99};
    int size = sizeof(tab) / 4;
    ft_rev_int_tab(tab, size);

    for(int i = 0; i < size; i++)
    {
        printf("%d, ", tab[i]);
    }
    return 0;
}
*/