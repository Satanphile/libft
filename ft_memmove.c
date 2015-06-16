/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 16:47:14 by thstrent          #+#    #+#             */
/*   Updated: 2015/05/13 18:31:59 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int		i;

	i = 0;
	while (i != len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
