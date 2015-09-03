/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/22 17:53:22 by thstrent          #+#    #+#             */
/*   Updated: 2015/09/03 16:48:59 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*result;
	size_t		i;

	i = 0;
	if ((result = malloc(sizeof(result) * size)) == NULL)
		return (NULL);
	while (i < size)
	{
		result[i] = 0;
		i++;
	}
	return (result);
}
