#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = s1;
	str2 = s2;
	while (i++ != n)
		if (str1[i - 1] != str2[i - 1])
			return ((int)str1[i - 1] - (int)str2[i - 1]);
	return (0);
}