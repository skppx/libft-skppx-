/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phabets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:21:38 by phabets           #+#    #+#             */
/*   Updated: 2021/12/02 17:44:04 by phabets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *first;

	first = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!lst)
		{
			ft_lstclear(&first, del);
			new->next = NULL;
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}		
