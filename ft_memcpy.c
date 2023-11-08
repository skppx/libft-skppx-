/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phabets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:29:04 by phabets           #+#    #+#             */
/*   Updated: 2021/12/01 11:35:10 by phabets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*_dest;
	unsigned char	*_src;

	_dest = (unsigned char *) dest;
	_src = (unsigned char *) src;
	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		_dest[i] = _src[i];
		i++;
	}
	return (dest);
}
