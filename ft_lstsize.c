/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmezgoli <wmezgoli@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:08:00 by wmezgoli          #+#    #+#             */
/*   Updated: 2026/05/17 17:08:01 by wmezgoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
/*
int main(void)
{
	int i = 0;
	t_list *lst = ft_lstnew(&i);
	t_list *new;

	i++;
	while (i < 20)
	{
	//	printf("%d\n",*(int*)((ft_lstlast(lst))->content));
		new = ft_lstnew((void*)&i);
		ft_lstadd_back(&lst, new);
		i++;
	}
	printf("%d\n", ft_lstsize(lst));
}
*/
