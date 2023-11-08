/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phabets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:03:08 by phabets           #+#    #+#             */
/*   Updated: 2021/11/29 18:09:42 by phabets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	_c;

	_c = c;
	if (c >= 97 && c <= 122)
	{
		_c = _c - 32;
		return (_c);
	}
	else
		return (c);
}