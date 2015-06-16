/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/14 19:30:33 by thstrent          #+#    #+#             */
/*   Updated: 2015/06/16 19:08:22 by thstrent         ###   ########.fr       */
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

	negate = 0;
	if (n < 0)
	{
		negate = 1;
		n = -n;
	}
	while (n != 0)
	{
		res = ft_stradd(res, mini_itoa(n % 10));
		n = n / 10;
	}
	if (negate == 1)
		ft_stradd(res, '-');
	ft_strrev(res);
	return (res);
}

int		main(void)
{
	ft_itoa(1234);
	return (0);
}
