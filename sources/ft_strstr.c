/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 19:47:54 by thstrent          #+#    #+#             */
/*   Updated: 2015/08/26 20:35:17 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	char	*dup1;

	i = 0;
	dup1 = ft_strdup(s1);
	if (s2 == '\0')
		return (dup1);
	else
		while (s1[i])
		{
			if (s1[i] == s2[0])
				return (dup1);
			i++;
		}
	return (NULL);
}
