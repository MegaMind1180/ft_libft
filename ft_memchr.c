


#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	const unsigned char	*str;
	size_t	i;

	if (!s)
		return (0);
	a = c;
	str = s;
	i = 0;
	while (n != i++)
		if (a == *str++)
			return ((void *)str - 1);
	return (0);
}
