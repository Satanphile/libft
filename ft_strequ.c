/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 18:13:40 by thstrent          #+#    #+#             */
/*   Updated: 2015/06/12 16:39:31 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strequ(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] < s2[i])
			return (0);
		if (s1[i] > s2[i])
			return (0);
		i++;
	}
	return (1);
}
