/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 20:20:29 by thstrent          #+#    #+#             */
/*   Updated: 2015/09/06 16:49:31 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*result;

	if ((result = malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	ft_bzero(result, size);
	return (result);
}
