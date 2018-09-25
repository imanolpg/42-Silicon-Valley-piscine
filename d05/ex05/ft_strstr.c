/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 14:06:03 by imgutier          #+#    #+#             */
/*   Updated: 2018/06/26 19:07:33 by imgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int pos_str;
	int pos_to;

	pos_str = 0;
	pos_to = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[pos_str] != '\0')
	{
		while (to_find[pos_to] != '\0')
		{
			if (str[pos_str + pos_to] != to_find[pos_to])
				break ;
			pos_to++;
		}
		if (to_find[pos_to] == '\0')
			return (str + pos_str);
		pos_str++;
	}
	return (0);
}
