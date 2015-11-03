/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/03 17:38:41 by thstrent          #+#    #+#             */
/*   Updated: 2015/09/06 16:55:46 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_strflen(const char *str, char c)
{
	int		i;

	i = 0;
	while (str[i] != c)
		i++;
	return (i);
}

static int		cfinder(const char *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			j++;
		i++;
	}
	return (j);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if ((tab = malloc(sizeof(char *) * cfinder(s, c))) == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
			i++;
		else
		{
			tab[j] = ft_strdup(ft_strsub(s, (i - ft_strflen(s, c)), i));
			i = i + ft_strflen(s, c);
			j++;
		}
	}
	return (tab);
}
