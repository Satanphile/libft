/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/03 17:38:41 by thstrent          #+#    #+#             */
/*   Updated: 2015/11/04 18:10:00 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strflen(const char *str, char c)
{
	size_t		i;

	i = 0;
	while (*str && *str != c)
	{	
		i++;	
		str++;
	}
	return (i);
}

static size_t		cfinder(const char *s, char c)
{
	size_t		i;

	i = 0;
	while (s[i])
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			i++;
		s++;
	}
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t i;

	if (!s)
		return (NULL);
	if ((tab = malloc((cfinder(s, c) + 1) * sizeof(char *))) == NULL )
		return (NULL);
	i = 0;
	while (i < cfinder(s, c) && *s)
	{
		while (*s == c)
			s++;
		if ((tab[i] = malloc((ft_strflen(s, c) + 1) * sizeof(char))) == NULL)
			return (NULL);
		ft_strncpy(tab[i], s, ft_strflen(s, c));
		tab[i][ft_strflen(s, c)] = '\0';
		s += ft_strflen(s, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
