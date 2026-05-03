#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*space;
	unsigned long long	totalsize;

	if (nmemb == 0 || size == 0)
		return (0);
	totalsize = nmemb * size;
	if (totalsize > SIZE_MAX)
		return (0);
	space = malloc(totalsize);
	if (!space)
		return (NULL);
	ft_bzero(space, totalsize);
	return (space);
}