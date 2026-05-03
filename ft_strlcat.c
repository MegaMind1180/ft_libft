#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char *dest = dst;
	if (!dst || !src || size == 0)
        return (0);
	i = ft_strlen(dst);
	j = 0;
	k = ft_strlen(dst) + ft_strlen(src);
	if (!dst || !src)
		return (ft_strlen(dst) + ft_strlen(src));
	if (size == 0)
		return (ft_strlen(src));
	if (i >= size)
    	return (size + ft_strlen(src));
	while (src[j] && i + j < size - 1)
	{
		dest[i + j] = src[j];
		j++; 
	}
	dest[i + j] = '\0';
	return (k);
}