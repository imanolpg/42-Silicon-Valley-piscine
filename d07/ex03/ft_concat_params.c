/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 21:49:31 by imgutier          #+#    #+#             */
/*   Updated: 2018/06/28 23:19:39 by imgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_concat_params(int argc, char **argv)
{
	int i;
	char *str;

	i = 0;
	while (argv[i])
		i++;
	i--;
	if (i == 0)
		return (0);
	*str = (char *)malloc(i);
	i = 0;
	while (argv[i] != '\0')
	{
		str[i] = argv[i];
		i++;
	}
	str[i] = '\0';
	return (*str);
}
