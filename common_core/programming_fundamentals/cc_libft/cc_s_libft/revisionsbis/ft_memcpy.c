#include <string.h>
#include <stddef.h>
#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *dest;
    unsigned char *source;
    size_t i;
    

    dest = (unsigned char *)dst;
    source = (unsigned char *)src;

    i = 0;
    while (i < n)
    {
        dest[i] = source[i];
        i++;
    }
    return(dest);

}

int main()
{
    char dest[10] = "ABC";
    char src[10] = "ABD";
    memcpy(dest, src, 3);
    printf("%s", dest);

    char dest1[10] = "ABC";
    char src[10] = "ABD";
    memcpy(dest, src, 3);
    printf("%s", dest);
    return (0);
}