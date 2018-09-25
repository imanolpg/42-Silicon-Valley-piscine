/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 22:24:28 by imgutier          #+#    #+#             */
/*   Updated: 2018/06/22 23:38:54 by imgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	temp;
	int		i;
	int		c;
	char	str2;

	str2 = str;
	i = 0;
	c = 0;
	while (str[i])
	{
		i++;
	}
	while (i >= 0)
	{
		str2[c] = str[i];
		temp = str2;
		i--;
		c++;
	}
	str = temp;
	return str;
}
