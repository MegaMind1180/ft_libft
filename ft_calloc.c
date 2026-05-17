#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*space;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
		return (0);
	space = malloc(nmemb * size);
	if (!space)
		return (NULL);
	ft_bzero(space, nmemb * size);
	return (space);
}
