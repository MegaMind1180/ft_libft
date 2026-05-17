#include "libft.h"
void    ft_lstadd_back(t_list **lst, t_list *neww)
{
        t_list  *last;
        if (!*lst)
        {
                *lst = neww;
                return ;
        }
        last = ft_lstlast(*lst);
        last->next = neww;
}
