/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 20:57:54 by thstrent          #+#    #+#             */
/*   Updated: 2015/08/26 20:18:50 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (s[i] != s[0])
	{
		if (s[i] == c)
			return ((char *)s);
		i--;
	}
	return (NULL);
}
