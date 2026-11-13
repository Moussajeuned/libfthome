#include <string.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t      i;
    size_t      j;
    size_t      s_len;

    i = 0;
    j = 0;
   

    while(dst[i] != '\0' && i < dstsize)
    {
        i++;
    }

    while(src[j] != '\0')
    {
        j++;
    }

    if(i >= dstsize)
    {
        return i + j;
    }

    s_len = j;

    j = 0;

    while(src[j] != '\0' && i + j < dstsize - 1)
    {
        dst[i + j] = src[j];
        j++;
    }
    dst[i + j] = '\0';

    return i + s_len;
}
