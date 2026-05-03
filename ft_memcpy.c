#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    if (!dest || !src)
        return (NULL);
    
    unsigned char *newdest;
    const unsigned char *newsrc;
    size_t i;

    newdest = dest;
    newsrc = src;
    i = 0;
    while (i < n)
    {
        newdest[i] = newsrc[i];
        i++;
    }
    return (newdest);
}
