#include "libft.h"
#include <stddef.h>
int ft_count_calloc(int n);
char ft_nmbrput(int n, char *result);

char *ft_itoa(int n)
{
	size_t	i;
	char *	result;

	i = 0:
	result = ft_calloc(ft_count_calloc(n), sizeof(char));
	ft_nmbrput(n, result);
	return (result);
}	


int ft_count_calloc(int n)
{
	size_t	count;

	if (n < 0)
    	n = n * -1;
	count = 1;
	while (n / 10 >= 0)
		count++; 
	return (count);
}


char ft_nmbrput(int n, char *result)
{
	if (n > 9)
		*result = ft_nmbrput(n / 10, ++result);
	return (n % 10 + '0');			
}
