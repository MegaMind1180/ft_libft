/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmezgoli <wmezgoli@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:08:15 by wmezgoli          #+#    #+#             */
/*   Updated: 2026/05/17 17:08:18 by wmezgoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	counter(const char *s, char c);
static void		ft_free(char **result);
static size_t	split_strlen(const char *s, char c, size_t start);

char	**ft_split(char const *s, char c)
{
	size_t	start;
	size_t	str;
	char	**result;
	size_t	len;

	start = 0;
	str = 0;
	result = ft_calloc(counter(s, c) + 1, sizeof(char *));
	if (!result)
		return (NULL);
	while (s[start])
	{
		if (s[start] != c)
		{
			len = split_strlen(s, c, start);
			result[str] = ft_substr(s, start, len);
			if (!result[str])
				return (ft_free(result), NULL);
			str++;
			start += len;
		}
		else
			start++;
	}
	return (result);
}

static size_t	split_strlen(const char *s, char c, size_t start)
{
	size_t	length;

	if (!s)
		return (0);
	length = 0;
	while (s[start] && s[start] != c)
	{
		length++;
		start++;
	}
	return (length);
}

static size_t	counter(const char *s, char c)
{
	size_t	i;
	size_t	wordcount;

	wordcount = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			wordcount++;
		i++;
	}
	return (wordcount);
}

static void	ft_free(char **result)
{
	size_t	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

int	main(void)
{
	char	**arr;
	int		i;

	arr = ft_split("xxxxxxxxxxxxxxxhalloxxxxhalloxxxxxhalloxxxxxxxxxx", 'x');
	if (!arr)
		return (0);
	i = 0;
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
	ft_free(arr);
	return (0);
}
