/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 20:42:17 by thstrent          #+#    #+#             */
/*   Updated: 2015/11/03 18:06:19 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*t_dst;
	unsigned char	*t_src;

	i = 0;
	t_dst = (unsigned char *)dst;
	t_src = (unsigned char *)src;
	while (i < n)
	{
		if (t_src[i] == (unsigned char)c)
		{
			return (&(t_dst[i + 1]));
		}
		else
		{
			t_dst[i] = t_src[i];
			i++;
		}
	}
	return (NULL);
}
