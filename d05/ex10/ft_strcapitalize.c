/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 22:08:23 by imgutier          #+#    #+#             */
/*   Updated: 2018/06/26 22:51:37 by imgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int index;
	int flag;

	index = 0;
	flag = 1;
	while (str[index] != '\0')
	{
		if (str[index] >= '0' && str[index] <= '9')
			flag = 0;
		if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] = 'a' + str[index] - 'A';
		if (str[index] >= 'a' && str[index] <= 'z' && flag == 1)
		{
			str[index] = 'A' + str[index] - 'a';
			flag = 0;
		}
		if ((str[index] >= 0 && str[index] <= 47) || \
			(str[index] >= 58 && str[index] <= 64) || \
			(str[index] >= 91 && str[index] <= 96))
			flag = 1;
		index++;
	}
	return (str);
}
