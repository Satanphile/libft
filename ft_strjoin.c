/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 18:30:38 by thstrent          #+#    #+#             */
/*   Updated: 2015/06/12 18:32:07 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const* s1, char const *s2)
{
	int		j;
	int		k;
	char	*str;

	j = 0;
	k = 0;
	if ((str = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1) == NULL))
		return (NULL);
	while (s1[j] < ft_strlen(s1) + ft_strlen(s2))
	{
		str[j] = s1[j];
		j++;
		if (s1[j] == '\0')
		{
			s1[j + k] = s2[k];
			str[j + k] = s2[k];
			k++;
		}
	}
	str[j + k] = '\0'
	return (str);
}
