/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 16:10:57 by thstrent          #+#    #+#             */
/*   Updated: 2015/09/06 16:51:33 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	mini_putnbr(int n)
{
	n = n + 48;
	write (1, &n, 1);
}

void	ft_putnbr(int n)
{
	while (n > 0)
	{
		n = n / 10;
		ft_putnbr(n);
		mini_putnbr(n % 10);
	}
}
