#include "libft.h"

static size_t	counter(const char *s, char c);
static void	ft_free(char **result);
static size_t  split_strlen(const char *s, char c, size_t start);

char	**ft_split(char const *s, char c)
{
	size_t	start;
	size_t	str;
	char	**result;

	start = -1;
	str = 0;
	result = ft_calloc(counter(s, c) + 1, sizeof(char *));
	if (!result)
		return (NULL);	
	while (s[++start])
	{
		if (s[start] != c)
		{	
			result[str] = ft_substr(s, start, split_strlen(s, c, start));
			if (!result[str])
			{
				ft_free(result);
				return (0);
			}
			str++;
			start = start + split_strlen(s, c, start) - 1;
		}
	}
	return (result);
}


static size_t  split_strlen(const char *s, char c, size_t start)
{
    size_t  length;

    if (!s)
        return (0);
    
    length = 0;
    while (s[start] != c && s[start++])
        length++;
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
		if (s[i] == c)
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
/*
int main(void)
{
	char **arr;
	int i;
	int count;

	
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
}*/
