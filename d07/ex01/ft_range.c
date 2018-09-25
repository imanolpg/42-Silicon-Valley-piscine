/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 15:30:17 by imgutier          #+#    #+#             */
/*   Updated: 2018/06/28 16:29:53 by imgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*str;
	int		i;
	int		c;

	if (max <= min)
		return (0);
	str = malloc(max - min);
	i = min;
	c = 0;
	while (i < max)
	{
		str[c] = i;
		i++;
		c++;
	}
	str[i] = '\0';
	return (str);
}
