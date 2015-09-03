/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 19:54:05 by thstrent          #+#    #+#             */
/*   Updated: 2015/08/26 18:54:53 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	char	*cp1;

	i = 0;
	cp1 = ft_strdup(s1);
	if ((s1 = malloc(sizeof(char) * (ft_strlen(s1) + n + 1))) == NULL)
		return (NULL);
	while (cp1[i])
	{
		s1[i] = cp1[i];
		i++;
	}
	while ((i - ft_strlen(cp1)) < n)
	{
		s1[i] = s2[i - ft_strlen(cp1)];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
