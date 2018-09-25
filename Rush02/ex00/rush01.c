/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 13:05:16 by ghdesfos          #+#    #+#             */
/*   Updated: 2018/07/08 13:45:35 by bbixby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	lineprint(int x, char a, char b, char c)
{
	int countx;

	countx = 1;
	while (countx <= x)
	{
		if (countx == 1)
		{
			ft_putchar(a);
		}
		else
		{
			(countx == x) ? ft_putchar(c) : ft_putchar(b);
		}
		countx++;
	}
}

int		rush01(int x, int y)
{
	int county;

	county = 1;
	if (x >= 1 && y >= 1)
	{
		while (county <= y)
		{
			if (county == 1)
				lineprint(x, '/', '*', 92);
			else if (county > 1 && county < y)
				lineprint(x, '*', ' ', '*');
			else if (county == y)
				lineprint(x, 92, '*', '/');
			ft_putchar(10);
			county++;
		}
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		rush01(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
