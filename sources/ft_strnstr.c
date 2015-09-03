/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/02 16:05:30 by thstrent          #+#    #+#             */
/*   Updated: 2015/08/26 20:46:08 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	char	*dup1;

	dup1 = ft_strdup(s1);
	i = 0;
	if (s2 == '\0')
		return (dup1);
	else
		while (i < n)
		{
			if (s1[i] == s2[0])
				return(dup1);
			i++;
		}
	return (NULL);
}
