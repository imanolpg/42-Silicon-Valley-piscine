/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 12:52:33 by imgutier          #+#    #+#             */
/*   Updated: 2018/07/03 20:14:29 by imgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *array;
	int n;

	n = 0;
	array = (int *)malloc(32 * length);
	while (n <= length)
	{
		array[n] = (*f)(tab[n]);
		n++;
	}
	return (array);
}
