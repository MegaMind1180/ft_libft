#include "libft.h"

size_t  ft_strlen(const char *s)
{
    size_t  x;

    if (!s)
        return (0);
    
    x = 0;
    while (s[x])
        x++;
    return (x);
}

/*
#include "libft.h"
int main(int argc, char **argv)
{
    printf("%ld", strlen(argv[1]));
}
*/