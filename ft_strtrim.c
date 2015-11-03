/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/22 19:18:52 by thstrent          #+#    #+#             */
/*   Updated: 2015/09/06 16:44:23 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = ft_strlen(s);
	if ((s[0] == ' ') || (s[0] == ',') || (s[0] == '\n') || (s[0] == '\t'))
	{
		i++;
		j--;
	}
	if ((s[j] == ' ') || (s[j] == ',') || (s[j] == '\n') || (s[j] == '\t'))
		j--;
	if ((result = malloc(sizeof(char) * ft_strlen(s) + 1)) == NULL)
		return (NULL);
	while (i <= j)
	{
		result[i] = s[i];
		i++;
	}
	result[j + 1] = '\0';
	return (result);
}
