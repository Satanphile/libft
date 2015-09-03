/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 18:30:38 by thstrent          #+#    #+#             */
/*   Updated: 2015/09/03 14:39:50 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const* s1, char const *s2)
{
	size_t	j;
	size_t	k;
	char	*str;
	char	*cps1;

	cps1 = ft_strnew(ft_strlen(s1));
	cps1 = ft_strcpy(cps1, s1);
	j = 0;
	k = 0;
	if ((str = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1)) \
		== NULL)
		return (NULL);
	while (j < ft_strlen(s1) + ft_strlen(s2))
	{
		str[j] = s1[j];
		j++;
		if (s1[j] == '\0')
		{
			cps1[j + k] = s2[k];
			str[j + k] = s2[k];
			k++;
		}
	}
	str[j + k] = '\0';
	return (str);
}
