/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmezgoli <wmezgoli@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:07:34 by wmezgoli          #+#    #+#             */
/*   Updated: 2026/05/17 17:07:35 by wmezgoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*dest;

	i = ft_strlen(s1) + 1;
	dest = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!dest)
		return (NULL);
	(void)ft_strlcpy(dest, s1, i);
	(void)ft_strlcat(dest, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (dest);
}
