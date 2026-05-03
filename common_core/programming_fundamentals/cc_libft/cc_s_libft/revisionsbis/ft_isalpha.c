int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return(0);

}
#include <ctype.h>
#include <stdio.h>
int main()
{
    printf("%d", ft_isalpha('z'));
    return (0);
}