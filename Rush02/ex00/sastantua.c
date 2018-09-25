/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 10:31:50 by wbao              #+#    #+#             */
/*   Updated: 2018/06/23 10:31:52 by wbao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		base_size(int size)
{
	int section;
	int bass;
	int step;

	step = 4;
	bass = 1;
	section = 0;
	while (section < size)
	{
		bass += 2 * (section + 2);
		if (section % 2)
		{
			step += 2;
		}
		bass += step;
		section++;
	}
	bass -= 2;
	return (bass);
}

void	to_door_or_not_to_door(int size, int level, int index)
{
	int door[4];

	door[0] = size / 2;
	if (!(size % 2))
		door[0] = door[0] - 1;
	door[1] = base_size(size) / 2 - door[0] - (size + 1 - level);
	door[2] = base_size(size) / 2 + door[0] - (size + 1 - level);
	door[3] = (3 - (size % 2) + door[0]);
	if (level >= 3 - (size % 2))
	{
		if (index >= door[1] && index <= door[2])
		{
			if (size > 4 && level == door[3] && index == door[2] - 1)
				ft_putchar('$');
			else
				ft_putchar('|');
		}
		else
			ft_putchar('*');
	}
	else
		ft_putchar('*');
}

void	last_section(int size)
{
	int i;
	int level;
	int width;

	level = 0;
	while (level < size + 2)
	{
		width = base_size(size) - 2 * (size + 1 - level);
		i = 0;
		while (i++ < size + 1 - level)
			ft_putchar(' ');
		i = 0;
		ft_putchar('/');
		while (i++ < width - 2)
			to_door_or_not_to_door(size, level, i);
		ft_putchar('\\');
		ft_putchar('\n');
		width += 2;
		level++;
	}
}

void	build_section(int size, int width, int height)
{
	int i;
	int level;

	level = 0;
	while (level < height)
	{
		i = 0;
		while (i++ < (base_size(size) - width) / 2)
			ft_putchar(' ');
		i = 0;
		ft_putchar('/');
		while (i++ < width - 2)
			ft_putchar('*');
		i = 0;
		ft_putchar('\\');
		ft_putchar('\n');
		width += 2;
		level++;
	}
}

void	sastantua(int size)
{
	int level;
	int width;
	int step;
	int height;

	level = 1;
	width = 3;
	step = 4;
	height = 3;
	while (level <= size - 1)
	{
		width = base_size(level) - 2 * (level + 1);
		build_section(size, width, height);
		height++;
		if (height % 2)
			step += 2;
		level++;
	}
	if (level == size)
		last_section(size);
}
