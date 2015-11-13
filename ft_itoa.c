/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/14 19:30:33 by thstrent          #+#    #+#             */
/*   Updated: 2015/11/13 15:10:39 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	mini_itoa(int i)
{
	char	c;

	c = i + 48;
	return (c);
}

char	*ft_itoa(int n)
{
	int		negate;
	char	*res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return ("0");
	negate = 0;
	if (n < 0)
	{
		negate = 1;
		n = -n;
	}
	if ((res = malloc(sizeof(char) * 1 )) == NULL)
		return (NULL);
	res[0] = '\0';
	while (n >= 10)
	{
		res = ft_stradd(res, mini_itoa(n % 10));
		n = n / 10;
	}
	res = ft_stradd(res, mini_itoa(n % 10));
	if (negate == 1)
		ft_stradd(res, '-');
	ft_strrev(res);
	return (res);
}
