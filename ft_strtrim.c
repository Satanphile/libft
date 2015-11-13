/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/22 19:18:52 by thstrent          #+#    #+#             */
/*   Updated: 2015/11/11 20:34:51 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t	i;
	size_t	j;
	char	*result;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s);
	result = ft_strnew(ft_strlen(s));
	while (i < ft_strlen(s))
	{
		if (((s[i] == ' ') || (s[i] == ',') || (s[i] == '\n') || (s[i] == '\t'))\
			&& ((s[i + 1] == ' ') || (s[i + 1] == ',') || (s[i + 1] == '\n') || (s[i + 1] == '\t')))
			i++;
		else
		{
			result[j] = s[i];
			i++;
			j++;
		}
	}
	return (result);
}
