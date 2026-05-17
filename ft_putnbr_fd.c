/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmezgoli <wmezgoli@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:06:37 by wmezgoli          #+#    #+#             */
/*   Updated: 2026/05/17 17:06:38 by wmezgoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stddef.h>
#include <stdint.h>
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	i;
	char	c;

	i = n;
	if (i < 0)
	{
		write(fd, "-", 1);
		i *= -1;
	}
	if (i > 9)
		ft_putnbr_fd(i / 10, fd);
	c = i % 10 + '0';
	write(fd, &c, 1);
}

/*
int	main(void)
{
	int	i;
	int	fd;

	i = INT_MAX;
	fd = 1;
	ft_putnbr_fd(i, fd);
	return (0);
}
*/
