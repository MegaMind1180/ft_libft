#include "libft.h"

char 	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;
	
	if (!*little)
		return ((char*)big);
	while (big[0])
	{
		j = 0;
		while (little[j] && big[j] == little[j])
			j++;
		if (j == len)
			return ((char*)big);
		big++;
	}
	return (0);
}
