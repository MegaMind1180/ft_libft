#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
        size_t  i;
        size_t  j;
        size_t  k;
        if (size == 0)
                return (ft_strlen(src));
        i = ft_strlen(dst);
        j = 0;
        k = i + ft_strlen(src);
        if (i >= size)
                return (size + ft_strlen(src));
        while (src[j] && i + j < size - 1)
        {
                dst[i + j] = src[j];
                j++;
        }
        dst[i + j] = '\0';
        return (k);
}
