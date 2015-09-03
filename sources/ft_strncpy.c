/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/02 13:49:31 by thstrent          #+#    #+#             */
/*   Updated: 2015/08/25 20:30:32 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	if (n < ft_strlen(src))
	{
		i++;
		while (n < ft_strlen(src))
		{
			dst[i] = '\0';
			i++;
		}
	}
	return(dst);
}
