/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 18:13:40 by thstrent          #+#    #+#             */
/*   Updated: 2015/10/31 15:54:23 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(const char *s1, const char *s2)
{
	if ((s1 && s2) && ft_strcmp(s1, s2) == 0)
		return (1);
	return (0);
}