/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmezgoli <wmezgoli@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:09:39 by wmezgoli          #+#    #+#             */
/*   Updated: 2026/05/17 17:09:40 by wmezgoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	j;

	if (!s)
		return (0);
	j = ft_strlen(s);
	s = s + j;
	while (j >= 0)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s--;
		j--;
	}
	return (0);
}
