char	*ft_strrchr(const char *s, int c)
{
	int	j;

	if (!s)
		return (0);
	j = ft_strlen(s);
	s = s + j;
	while (j >= 0)
	{
		if (*s == c)
		{
			return ((char*)s);
		}
		s--;
		j--;
	}
	return (0);
}