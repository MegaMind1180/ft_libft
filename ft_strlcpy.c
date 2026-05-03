#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	if (!src || !dst || dsize == 0)
		return (ft_strlen(src));

	i = -1;
	while (++i < dsize && src[i])
		dst[i] = src[i];
	dst[i] = src[i];
	return (ft_strlen(src));
}