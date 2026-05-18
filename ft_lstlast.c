/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmezgoli <wmezgoli@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:05:27 by wmezgoli          #+#    #+#             */
/*   Updated: 2026/05/17 17:05:28 by wmezgoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*
int main(void)
{
	int i = 0;
	t_list *lst = ft_lstnew(&i);
	t_list *new;

	i++;
	while (i < 10)
	{
	//	printf("%d\n",*(int*)((ft_lstlast(lst))->content));
		new = ft_lstnew((void*)&i);
		ft_lstadd_back(&lst, new);
		i++;
	}
	printf("%d\n",*(int*)((ft_lstlast(lst))->content));
}
*/
