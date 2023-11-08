/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phabets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:30:01 by phabets           #+#    #+#             */
/*   Updated: 2021/12/01 15:21:34 by phabets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	ft_count(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] && str[i] == c)
		i++;
	while (str[i])
	{
		while (str[i] && str[i] != c)
			i++;
		count++;
		while (str[i] && str[i] == c)
			i++;
	}
	return (count);
}

static char	*ft_strdupmodif(const char *str, char c)
{
	char	*tab;
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	tab = malloc((i + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(const char *str, char c)
{
	int		i;
	int		j;
	int		len;
	char	**tab;

	if (!str)
		return (NULL);
	len = ft_count(str, c);
	tab = malloc((len + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	j = 0;
	i = 0;
	while (j < len && str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		tab[j] = ft_strdupmodif(&str[i], c);
		j++;
		while (str[i] && str[i] != c)
			i++;
	}
	tab[j] = 0;
	return (tab);
}
