/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 20:42:17 by thstrent          #+#    #+#             */
/*   Updated: 2015/10/22 16:47:28 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int		i;

	i = 0;
	while (i != n)
	{
		if (src[i] == c)
		{
			return (dest[i + 1]);
		}
		else
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (NULL);
}
