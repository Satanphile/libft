/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 20:20:15 by thstrent          #+#    #+#             */
/*   Updated: 2015/10/31 15:02:13 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	else
		return (0);
}