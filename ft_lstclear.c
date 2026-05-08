#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;

	while (*lst)
	{
		current = *lst;
		*lst = *lst->next;
		del(current->content);
		free(current);
	}
	*lst = NULL;
}
