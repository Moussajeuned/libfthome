#include <string.h>

char *ft_strdup(const char *s)
{
    int     i;
    int     j;
    char *str;

    i = 0;
    j = 0;
    str = malloc(sizeof(char) * ft_strlen(s) + 1);
    if(str == NULL)
    {
        return  NULL;
    }

    while(s[i] != '\0')
    {
        str[j] = s[i];
        i++;
        j++;
    }
    str[j] = '\0';

    return (str);

}
