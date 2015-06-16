/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 18:25:51 by thstrent          #+#    #+#             */
/*   Updated: 2015/06/02 15:07:21 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	char	*cp1

	i = 0;
	cp1 = ft_strcpy(s1)
	if ((s1 = malloc(sizeof(char) * ft_strlen(cp1) + ft_strlen(s2) + 1)) == 0)
		return (NULL);
	while (cp1[i])
	{
		s1[i] = cp1[i];
		i++;
	}
	while (i < (ft_strlen(cp1) + ft_strlen(s2)))
	{
		s1[i] = s2[i - ft_strlen(cp1)];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}