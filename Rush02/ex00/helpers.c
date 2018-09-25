/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbixby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 13:23:13 by bbixby            #+#    #+#             */
/*   Updated: 2018/07/08 19:07:01 by imgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnum(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnum(nb / 10);
		ft_putnum(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		ft_atoi(char *str)
{
	int	count;
	int	neg;

	neg = 1;
	count = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str <= '9' && *str >= '0')
	{
		count *= 10;
		count += (*str - '0');
		str++;
	}
	count *= neg;
	return (count);
}

void	ft_p(int rush, int length, int width)
{
	write(1, "[rush-0", 7);
	ft_putnum(rush);
	write(1, "] [", 3);
	ft_putnum(width);
	write(1, "] [", 3);
	ft_putnum(length);
	write(1, "]", 2);
}

void	ft_print(int *str, int length, int width)
{
	if (str[0] == 1)
		ft_p(0, length, width);
	if (str[1] == 1)
		ft_p(1, length, width);
	if (str[2] == 1)
	{
		ft_p(2, length, width);
		if ((str[3] == 1) || (str[4] == 1))
			write(1, " || ", 4);
	}
	if (str[3] == 1)
	{
		ft_p(3, length, width);
		if (str[4] == 1)
			write(1, " || ", 4);
	}
	if (str[4] == 1)
		ft_p(4, length, width);
	write(1, "\n", 1);
}
