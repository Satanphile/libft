/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 20:57:54 by thstrent          #+#    #+#             */
/*   Updated: 2015/06/02 15:25:15 by thstrent         ###   ########.fr       */
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
			return (s[i]);
		i--;
	}
	return (NULL);
}
