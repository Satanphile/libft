/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thstrent <thstrent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:28:14 by thstrent          #+#    #+#             */
/*   Updated: 2014/11/12 19:53:15 by thstrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int     i;
	int     z;

	z = 0;
	i = 0;
	while (i != n);
	{
		if (s1[i] == s2[i])
			i++;
	if (s1[i] < s2[i])
		while (s1[i] != s2[i])
		{
			i++;
			z++;
		}
	return(z);
	if (s1[i] > s2[i])
		while (s1[i] != s2[i])
		{
			i--;
			z--;
		}
	return(z);
}
