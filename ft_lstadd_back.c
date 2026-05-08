#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *neww)
{
	t_list	*last;

	last = *lst;
	while (last->next)
		last = last->next;
	last->next = neww; 
}
