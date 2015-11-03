/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/22 17:53:22 by thstrent          #+#    #+#             */
/*   Updated: 2015/10/26 07:51:27 by thstrent         ###   ########.fr       */
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
	ft_bzero(result, size);
	return (result);
}
