#include "libft.h"
#include <stddef.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	end;

	i = 0;
	end = ft_strlen(s);

	while (i < end) 
	{
		f(i, &s[i]);
		i++;
	}
}
