#include "libft.h"
static int      is_set(char c, const char *set);
char    *ft_strtrim(char const *s1, char const *set)

{
        size_t  start;
        size_t  end;
        size_t  len;
        char    *result;
        start = 0;
        end = ft_strlen(s1);
        while (s1[start] && is_set(s1[start], set))
                start++;
        while (end > start && is_set(s1[end - 1], set))
                end--;
        len = end - start;
        result = ft_substr(s1, start, len);
        return (result);
}
static int      is_set(char c, const char *set)
{
        while (*set)
        {
                if (*set == c)
                        return (1);
                set++;
        }
        return (0);
}
