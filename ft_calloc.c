/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phabets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:16:43 by phabets           #+#    #+#             */
/*   Updated: 2023/06/27 15:13:32 by phabets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*mem;

	if (size >= SIZE_MAX || nmemb >= SIZE_MAX || (nmemb * size) >= SIZE_MAX)
		return (NULL);
	if (size != 0 && nmemb != 0)
	{
		if ((size * nmemb) < size || (size * nmemb) < nmemb)
			return (NULL);
	}
	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, (nmemb * size));
	return (mem);
}
/*
int main()
{
	printf("%p", ft_calloc(-5, -5));
	return (0);
}
*/
