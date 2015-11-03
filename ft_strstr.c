/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 19:47:54 by thstrent          #+#    #+#             */
/*   Updated: 2015/10/31 16:11:40 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	if (*s2)
	{
		while ((ft_strncmp(s1, s2, ft_strlen(s2))) != 0)
		{
			if (s1 == '\0')
				return (NULL);
			s1++;
		}
	}
	return ((char *)s1);
}
