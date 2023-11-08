/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phabets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:02:32 by phabets           #+#    #+#             */
/*   Updated: 2021/11/27 17:30:59 by phabets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = -1;
	while (++i < size && *dest)
	{
		dest++;
	}
	if (i == size)
		return (i + ft_strlen(src));
	j = 0;
	while (src[j] && j < size - i - 1)
	{
		*dest++ = src[j];
		j++;
	}
	*dest = '\0';
	return (i + ft_strlen(src));
}
