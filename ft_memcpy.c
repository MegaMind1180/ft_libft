/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmezgoli <wmezgoli@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:06:30 by wmezgoli          #+#    #+#             */
/*   Updated: 2026/05/17 17:06:32 by wmezgoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*newdest;
	const unsigned char	*newsrc;
	size_t				i;

	if (!dest || !src)
		return (dest);
	newdest = dest;
	newsrc = src;
	i = 0;
	while (i < n)
	{
		newdest[i] = newsrc[i];
		i++;
	}
	return (newdest);
}
