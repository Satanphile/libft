/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 13:34:56 by thstrent          #+#    #+#             */
/*   Updated: 2015/11/06 18:14:08 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stradd(char *str, char c)
{
	char	*res;

	if ((res = malloc(sizeof(char) * ft_strlen(str) + 2)) == 0)
		return (NULL);
	ft_bzero(res, ft_strlen(str));
	ft_strncpy(res, str, ft_strlen(str));
	res[ft_strlen(str) + 1] = c;
	res[ft_strlen(str) + 2] = '\0';
	return (res);
}
