/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/22 19:14:03 by thstrent          #+#    #+#             */
/*   Updated: 2015/06/16 15:52:04 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int		i;
	char	*result;

	i = 0;
	result = ft_strnew(ft_strlen(s));
	while (s[i])
	{
		result[i] = (f(i, s[i]));
		i++;
	}
	return (result);
}
