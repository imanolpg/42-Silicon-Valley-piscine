/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 00:27:33 by imgutier          #+#    #+#             */
/*   Updated: 2018/06/23 13:36:46 by imgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int aux;

	aux = nb - 1;
	if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	else
	{
		if (nb == 0)
		{
			return (1);
		}
		else
		{
			while (aux > 1)
			{
				nb = nb * aux;
				aux--;
			}
			return (nb);
		}
	}
}
