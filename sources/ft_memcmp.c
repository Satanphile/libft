/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 17:46:12 by thstrent          #+#    #+#             */
/*   Updated: 2015/07/31 17:18:43 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while ((i < n) && (i < n))
	{
		if ((str1[i] == '\0') && (str2[i] == '\0'))
			return (0);
		if ((str1[i] == '\0') && (str1 != str2))
			return (-1);
		if ((str2[i] == '\0') && (str1 != str2))
			return (1);
	}
	return (0);
}
