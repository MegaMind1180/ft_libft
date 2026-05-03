#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest || !src)
		return (NULL);
	
	unsigned char	*newdest;
	const unsigned char	*newsrc;
	size_t i;

	newdest = dest;
	newsrc = src;
	i = 0;
	while (i < n)
	{
		if (src < dest)
		{
			n--;
			newdest[n] = newsrc[n];
		}
		else
		{
			newdest[i] = newsrc[i];
			i++;
		}
	}
	return (newdest);
}
/*
int main(void)
{
    char s1[50] = "hallo";
    char s2[50] = "welt!";
    
    printf("ft: \"%s\"\n", (char*)ft_memmove(s1, s2, ft_strlen(s2) + 1));
    
    char s3[50] = "hallo";
    printf("og: \"%s\"\n", (char*)memmove(s3, s2, ft_strlen(s2) + 1));
}
*/