/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmezgoli <wmezgoli@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 17:59:14 by wmezgoli          #+#    #+#             */
/*   Updated: 2026/03/19 18:05:22 by wmezgoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		i;
	long	result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}

/*
#include <stdio.h>
int	main(void)
{
	printf("Test 1: %d\n", ft_atoi("42"));
	printf("Test 2: %d\n", ft_atoi("-42"));
	printf("Test 3: %d\n", ft_atoi("   45030"));
	printf("Test 4: %d\n", ft_atoi("  -  42"));
	printf("Test 5: %d\n", ft_atoi("--42"));
	printf("Test 6: %d\n", ft_atoi("hallo"));
	printf("Test 7: %d\n", ft_atoi("0"));
	printf("Test 8: %d\n", ft_atoi("-2147483648"));
	return (0);
}
*/
