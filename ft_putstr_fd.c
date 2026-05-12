#include "libft.h"
#include <stddef.h>
#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		write(fd, &s[i], 1);
		i++;
    }
}
