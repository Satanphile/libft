/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/16 23:06:55 by thstrent          #+#    #+#             */
/*   Updated: 2015/02/04 21:32:01 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		secur(const char c)
{
	while ((c < 49) && (c > 57))
	{
		write(1, "b", 1);
		if (((c >= 0) && (c < 32)) || ((c > 32) && (c < 45)))
			return (1);
		if ((c > 58) && (c < 127))
			return (1);
		if ((c > 45) && (c < 48))
			return (1);
		else
			return (0);
	}
	return (0);
}

int		ft_atoi(const char *str)
{
	int		i;
	int		result;
	int		y;

	i = 0;
	y = 0;
	result = 0;
	while (str[i])
	{
		write(1, "a", 1);
		if (secur(str[i] == 1))
				return (result);
		if ((str[i] == 9) || (str[i] == ' '))
			i++;
		if (((str[i] == '-') && (str[i + 1] > 47) && (str[i + 1] < 58)))
		{
			y = 1;
			i++;
		}
		if ((str[i] > 47) && (str[i] < 58))
		{
			result = result * 10;
			result = result + (str[i] - 48);
			i++;
		}
	}
	if (y == 1)
		result = result * - 1;
	else
		return (result);
	return (result);
}

int		main(void)
{
	char	*str;
	int		i;
	int		y;

	str = "123";
	i = 0;
	y = ft_atoi(str);
	while (i < y);
	{
		write(1, "z", 1);
	}
	return (0);
}
