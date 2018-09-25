/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbixby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 11:44:43 by bbixby            #+#    #+#             */
/*   Updated: 2018/07/08 19:05:35 by imgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	onebyone(int **result, int length, int width)
{
	if (length == 1 && width == 1)
	{
		(*result)[2] = 1;
		(*result)[3] = 1;
		(*result)[4] = 1;
	}
}

void	single(int **result, char *str, int length, int width)
{
	if (length == 1)
	{
		if (str[width - 1] == 'C')
		{
			(*result)[3] = 1;
			(*result)[4] = 1;
		}
		if (str[width - 1] == 'A')
			(*result)[2] = 1;
	}
	if (width == 1)
	{
		if (str[length * (width + 1) - 2] == 'C')
		{
			(*result)[2] = 1;
			(*result)[4] = 1;
		}
		if (str[length * (width + 1) - 2] == 'A')
			(*result)[3] = 1;
	}
	onebyone(result, length, width);
}

int		*ft_rush(char *str, int length, int width)
{
	int		*result;

	result = malloc(sizeof(int*) * 5);
	if (*str == 'o')
		result[0] = 1;
	if (*str == '/')
		result[1] = 1;
	if (*str == 'A')
	{
		if (width > 1 && length > 1)
		{
			if (str[width - 1] == 'A' && str[length * (width + 1) - 2] == 'C')
				result[2] = 1;
			if (str[width - 1] == 'C' && str[length * (width + 1) - 2] == 'C')
				result[3] = 1;
			if (str[width - 1] == 'C' && str[length * (width + 1) - 2] == 'A')
				result[4] = 1;
		}
		single(&result, str, length, width);
	}
	return (result);
}

int		main(void)
{
	char	c;
	int		length;
	int		width;
	char	*str;
	int		l;

	str = (char *)malloc(sizeof(char) * 2147483647);
	l = 0;
	while (read(0, &c, 1))
	{
		str[l] = c;
		l++;
	}
	length = ft_length(str);
	width = ft_width(str);
	ft_print(ft_rush(str, length, width), length, width);
	free(str);
	return (0);
}
