#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s1;
	size_t	i;

	i = 0;
	s1 = malloc(ft_strlen(s) + 1);
	if (!s1)
		return (NULL);
	while (s[i++])
		s1[i - 1] = s[i - 1];
	s1[i] = '\0';
	return (s1);	
}
