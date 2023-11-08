/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phabets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:59:43 by phabets           #+#    #+#             */
/*   Updated: 2021/12/01 11:37:55 by phabets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*_s;
	size_t			i;

	_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (_s[i] == (unsigned char)c)
		{
			return ((void *) &_s[i]);
		}
		i++;
	}
	return (NULL);
}
