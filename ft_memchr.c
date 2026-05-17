/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmezgoli <wmezgoli@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:08:57 by wmezgoli          #+#    #+#             */
/*   Updated: 2026/05/17 17:08:58 by wmezgoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		a;
	const unsigned char	*str;
	size_t				i;

	if (!s)
		return (0);
	a = c;
	str = s;
	i = 0;
	while (n != i++)
		if (a == *str++)
			return ((void *)str - 1);
	return (0);
}
