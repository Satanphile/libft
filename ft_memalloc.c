/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/22 17:53:22 by thstrent          #+#    #+#             */
/*   Updated: 2015/06/02 16:44:51 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*result;
	int		i;

	i = 0;
	if (result = malloc(sizeof(*result) * size) == NULL)
		return (NULL);
	while (i < size)
	{
		result[i] = '\0';
		i++;
	}
	return (result);
}
