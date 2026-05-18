/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmezgoli <wmezgoli@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:06:18 by wmezgoli          #+#    #+#             */
/*   Updated: 2026/05/17 17:06:20 by wmezgoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
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

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void    *ft_toupper_content(void *content)
{
    char    *str;
    char    *new;
    int     i;

    str = (char *)content;
    new = malloc(ft_strlen(str) + 1);
    if (!new)
        return (NULL);
    i = 0;
    while (str[i])
    {
        new[i] = ft_toupper(str[i]);
        i++;
    }
    new[i] = '\0';
    return (new);
}


void    ft_del(void *content)
{
    free(content);
}

int main()
{
    t_list  *lst;
    t_list  *result;
    t_list  *tmp;

    // Liste aufbauen
    lst = ft_lstnew("hello");
    ft_lstadd_back(&lst, ft_lstnew("world"));
    ft_lstadd_back(&lst, ft_lstnew("42"));

    // Original ausgeben
    printf("Original:\n");
    tmp = lst;
    while (tmp)
    {
        printf("  %s\n", (char *)tmp->content);
        tmp = tmp->next;
    }

    // ft_lstmap anwenden
    result = ft_lstmap(lst, ft_toupper_content, ft_del);

    // Ergebnis ausgeben
    printf("Nach lstmap (toupper):\n");
    tmp = result;
    while (tmp)
    {
        printf("  %s\n", (char *)tmp->content);
        tmp = tmp->next;
    }

    ft_lstclear(&lst, ft_del);
    ft_lstclear(&result, ft_del);
    return (0);
}

