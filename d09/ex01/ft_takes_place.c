/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 01:50:12 by imgutier          #+#    #+#             */
/*   Updated: 2018/06/29 16:35:57 by imgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int uno;
	int dos;

	dos = (hour % 100);
	uno = (hour / 100);
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	(uno > 12) ? printf("%.2i P.M.", uno) : printf("%.2i A.M.", (uno % 12));
	printf(" AND ");
	(dos > 12) ? printf("%.2i P.M.", dos) : printf("%.2i A.M.", (dos % 12));
}
