/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/03 16:40:25 by thstrent          #+#    #+#             */
/*   Updated: 2015/10/31 15:49:29 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f) (char))
{
	int		i;
	char	*result;

	if (s && f)
	{
		i = 0;
		result = ft_strnew(ft_strlen(s));
		while (s[i])
		{
			result[i] = f(s[i]);
			i++;
		}
		return (result);
	}
	return (NULL);
}
