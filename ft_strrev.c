/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 14:27:41 by thstrent          #+#    #+#             */
/*   Updated: 2015/09/06 16:54:47 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	size_t		i;
	char	*res;
	
	i = ft_strlen(str - 1);
	res = ft_strdup(str);
	while (i < ft_strlen(str - 1))
	{
		res[i] = str[ft_strlen(str) - i];
		i++;
	}
	return (res);
}
