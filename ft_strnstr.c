/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/02 16:05:30 by thstrent          #+#    #+#             */
/*   Updated: 2015/11/03 16:28:49 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
    if (*s2 == '\0')
		return ((char *)s1);
	{
		while (s1 && n >= ft_strlen(s2))
		{
			if (strncmp(s1, s2, ft_strlen(s2)) == 0)
				return ((char *)s1);
			s1++;
			n--;
		}
	}
	return (NULL);
}	
