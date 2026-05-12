#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*dest;

	i = ft_strlen(s1);
	dest = malloc(ft_strlen(s1) + ft_strlen(s2));
	if (!dest)
		return (NULL);
	(void)ft_strlcpy(dest, s1, i);
	(void)ft_strlcat(dest, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (dest);
}
