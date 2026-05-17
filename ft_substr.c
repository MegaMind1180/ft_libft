#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    size_t  i;

    if (start >= ft_strlen(s))
        return (ft_strdup(""));
    sub = malloc(len + 1);
    if (!sub)
        return (NULL);
    i = 0;
    while (i < len && s[start])
        sub[i++] = s[start++];
    sub[i] = '\0';
    return (sub);
}





	










