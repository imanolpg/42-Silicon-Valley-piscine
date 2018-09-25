/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   secondlibrary.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 22:07:38 by imgutier          #+#    #+#             */
/*   Updated: 2018/07/08 22:07:50 by imgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

void    ft_putnbr(int n)
{
    if (n == -2147483648)
        ft_putstr("-2147483648");
    else
    {
        if (n < 0)
        {
            ft_putchar('-');
            n *= -1;
        }
        if (n >= 10)
            ft_putnbr(n / 10);
        ft_putchar((n % 10) + '0');
    }
}

int		str_length(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (*str != ' ')
			i++;
	}
	return (i);
}

char 	*space_rmover(char *str)
{
	char	*newstr;
    char    *start;

    newstr = (char *)malloc(sizeof(char) * (str_length(str)));
    start = newstr;
	while (*str != '\0')	
	{
		if (*str != ' ')
		{
			*newstr = (*str);
			newstr++;
		}
		str++;
	}
	return (start);
}

