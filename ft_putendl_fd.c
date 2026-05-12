#include "libft.h"
#include <stddef.h>
#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		write(fd, &s[i], 1);
		i++;
    }
	write(fd, "\n", 1);
}

/*
int main(void)
{
	int fd = 1;
	char *s = "hallo";

	ft_putendl_fd(s, fd);
}
*/
