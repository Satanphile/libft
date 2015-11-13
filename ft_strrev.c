/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 14:27:41 by thstrent          #+#    #+#             */
/*   Updated: 2015/11/13 15:10:08 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	size_t		i;
	char	*res;
	
	i = 0;
	res = ft_strdup(str);
	while (str[i])
	{
		res[(ft_strlen(str) - 1) - i] = str[i];
		i++;
	}
	return (res);
}
