/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 18:18:52 by thstrent          #+#    #+#             */
/*   Updated: 2015/06/12 17:17:30 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		if (s1[i] < s2[i])
			return (0);
		if (s1[i] > s2[i])
			return (0);
		i++;
	}
	return (1);
}
