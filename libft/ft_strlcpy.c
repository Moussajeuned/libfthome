#include <string.h>
#include "libft.h"
#include <stdio.h>


size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t      i;
    
    i = 0;
    if(dstsize == 0)
    {
        return (ft_strlen(src));
    }
    while(src[i] != '\0' && i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';


    return (ft_strlen(src));
}

int main(void)
{
    char m[] = "Moussa";
    // L\0ussa\0
    ft_strlcpy(m, "Larisa", 0);

    printf("faux strlcpy = %s\n", m);




}
