#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dest;
	t_list	*src;
	t_list	*new_lst;

	src = lst;
	dest = NULL;
	while (src)
	{
		new_lst = ft_lstnew(f(src->content));
		if (!new_lst)
		{
			ft_lstclear(&dest, del);
			return (0);
		}
		ft_lstadd_back(&dest, new_lst);
		src = src->next;
	}
	return (dest);
}
