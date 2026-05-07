#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) 
{
	size_t	i;
	char	*result;
 	size_t	end;

 	i = 0;
 	end = ft_strlen(s);
 	result = ft_calloc(end + 1, sizeof(char));
 	if (!result)
 		return (NULL);
 	while (i < end) 
 	{
     	result[i] = f(i, s[i]);
 		i++;
    }
 	return (result);
}
