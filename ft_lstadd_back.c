/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phabets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:35:52 by phabets           #+#    #+#             */
/*   Updated: 2021/12/02 17:22:26 by phabets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
	if (!alst || !new)
		return ;
	t_list *end;
	if (*alst)
	{
		end = ft_lstlast(*alst);
		end->next = new;
	}
	else
		*alst = new;
}
