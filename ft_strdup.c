/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 17:26:32 by thstrent          #+#    #+#             */
/*   Updated: 2015/06/16 14:27:22 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_strlen(char *s);

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*str;

	i = 0;
	if ((str = malloc(sizeof(char) * ft_strlen(s) + 1) == NULL))
		return (NULL);
	while (s1 != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0'
	return (str);
}
