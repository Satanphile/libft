/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/26 18:17:27 by thstrent          #+#    #+#             */
/*   Updated: 2015/08/26 18:56:06 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		res;

	i = 0;
	res = ft_strlen(src);
	if (size <= 0)
		return (res + 1);
	while (i < size)
	{
		if (dst[i])
			i++;
		else
		{
			i++;
			res = res + i;
		}	
	}
	i++;
	res = res + i;
	return (res);
}
