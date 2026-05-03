#include <stddef.h>
#include <string.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char *adm;
    size_t  i;

    i = 0;
    adm = (unsigned char *)s;
    if (n == 0)
        return ;
    while (i < n)
    {
       adm[i] = 0;
        i++;
    }
}
#include <stdio.h>

int main()
{
    char test[20] = "";
    char test2[20] = "";

    ft_bzero(test, 4);
    printf("ft_bzero : %s\n", test);
    bzero(test2, 4);
    printf("bzero: %s\n",test2);
    return (0);
}