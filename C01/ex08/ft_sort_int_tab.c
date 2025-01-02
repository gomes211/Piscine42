void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int aux;

    i = 0;
    while (i < size - 1)
    {
        if (tab[i] > tab[i + 1])
        {
            aux = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = aux;
            i = 0;
        }
        else
        {
            i++;
        }
    }
}
/*
#include <stdio.h>
int main()
{
    int tab[] = {10, 3, 55, 11, 2, 1, 99};
    int size = sizeof(tab) / 4;

    ft_sort_int_tab(tab, size);
    for(int i = 0; i < size; i++)
    {
        printf("%d, ", tab[i]);
    }
    return 0;
}
*/