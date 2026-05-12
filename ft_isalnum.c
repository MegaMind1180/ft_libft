#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int main(int argc, char **argv)
{
	printf("%d", isalnum(argv[1][0]));
}
*/
