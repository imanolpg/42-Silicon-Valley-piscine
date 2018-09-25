/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 16:30:23 by imgutier          #+#    #+#             */
/*   Updated: 2018/06/28 18:57:58 by imgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		a;

	a = 0;
	if (max <= min)
		*range = NULL;
		return (0);
	*range = (int *)malloc(max - min);
	while (min < max)
	{
		range[0][a] = min;
		a++;
		min++;
	}
	return (a);
}
