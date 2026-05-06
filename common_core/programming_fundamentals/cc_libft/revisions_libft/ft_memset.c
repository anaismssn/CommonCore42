#include <stddef.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *adm;
    size_t  i;

    i = 0;
    adm = (unsigned char *)s;
    while (i < n)
    {
       adm[i] = (unsigned char)c;
        i++;
    }
    return(s);
}
#include <stdio.h>

int main()
{
    char    *a;
    char    *b;
    char test[255] = "";
    char test2[255] = "";

    a = ft_memset(test, 255, 4);
    printf("ft_memset : %s\n", a);
    b = memset(test, 255, 4);
    printf("memset : %s\n", b);
    return (0);
}