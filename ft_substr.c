/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phabets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:02:06 by phabets           #+#    #+#             */
/*   Updated: 2021/12/04 18:52:34 by phabets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		cpy = (char *)malloc(sizeof(*s));
		if (!cpy)
			return (NULL);
		cpy[0] = '\0';
		return (cpy);
	}
	if (len + start > ft_strlen(s))
		len = ft_strlen(s) - start;
	cpy = (char *)malloc((len + 1) * sizeof(*s));
	if (!cpy)
		return (NULL);
	if (start < ft_strlen(s))
		ft_strlcpy(cpy, ((char *) &s[start]), len + 1);
	return (cpy);
}
