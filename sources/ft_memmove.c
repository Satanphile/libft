/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 16:47:14 by thstrent          #+#    #+#             */
/*   Updated: 2015/07/31 16:41:18 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned long	i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char*)dst;
	s2 = (char*)src;
	while (i != len)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dst);
}
