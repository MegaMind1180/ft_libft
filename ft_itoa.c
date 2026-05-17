/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmezgoli <wmezgoli@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:05:13 by wmezgoli          #+#    #+#             */
/*   Updated: 2026/05/17 19:09:44 by wmezgoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_calloc(long n);
char		*ft_ifminus(char *result, long n, int count);

char	*ft_itoa(int nbr)
{
	int		count;
	char	*result;
	long	n;

	n = nbr;
	if (n == 0)
		return (ft_strdup("0"));
	count = ft_count_calloc(n);
	result = (char *)ft_calloc(count + 1, sizeof(char));
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result = ft_ifminus(result, n, count);
		return (result);
	}
	while (0 < count)
	{
		result[--count] = n % 10 + '0';
		n = n / 10;
	}
	return (result);
}

static int	ft_count_calloc(long n)
{
	int	count;

	if (n < 0)
	{
		n *= -1;
		count = 1;
	}
	else
		count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_ifminus(char *result, long n, int count)
{
	result[0] = '-';
	n *= -1;
	while (1 < count)
	{
		result[--count] = n % 10 + '0';
		n = n / 10;
	}
	return (result);
}

/*
int	main(void)
{
	int	i;
	int	j;
	int	x;

	x = -1;
	i = INT_MAX;
	j = INT_MIN;
	printf("i: %s\n", ft_itoa(i));
	printf("j: %s\n", ft_itoa(j));
	printf("i: %s\n", ft_itoa(x));
}



#include "libft.h"
#include <string.h>

int			ft_count_calloc(int n);
char		ft_nmbrput(int n, char *result);
char		*ft_reverse_str(char *s);

char	*ft_itoa(int n)
{
	size_t	sign_len;
	size_t	len;
	size_t	count;

	char *	result;
	char *	result_sign;
	len = ft_count_calloc()c(n) + 1;
	if (n < 0)
		len++;
	
	result = ft_calloc(len, sizeof(char));
	sign_len = 0;
	if (n < 0)
	{
		result[0] = '-';
		sign_len++;
	}
	ft_nmbrput(n, result + sign_len);
	result_sign = result + sign_len;
	result_sign = ft_reverse_str(result + sign_len);
	return (result);
}	
int	ft_count_calloc(int n)
{
	count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	} 
	return (count);
}


char	ft_nmbrput(int input, char *result)
{
	long	n;

	n = input;
	if (n < 0)
		n *= -1;
	if (n > 9)
		*result = ft_nmbrput(n / 10, result + 1);
	*result = n % 10 + '0';
	return (*result);			
}

char	*ft_reverse_str(char *s)
{
	size_t	i;
	size_t	j;
	char	c;

	i = 0;
	j = ft_strlen(s) - 1;
	
	while (j > i)
	{
		c = s[i];
		s[i++] = s[j];
		s[j--] = c;
	}
	return (s);
}
*/
