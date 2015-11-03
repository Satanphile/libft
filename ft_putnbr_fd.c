/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/02 17:16:34 by thstrent          #+#    #+#             */
/*   Updated: 2015/09/06 16:53:55 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	mini_putnbr_fd(int n, int fd)
{
	n = n + 48;
	write (fd, &n, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	while (n > 0)
	{
		n = n / 10;
		ft_putnbr(n);
		mini_putnbr_fd(n % 10, fd);
	}
}
