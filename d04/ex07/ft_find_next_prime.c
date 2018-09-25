/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 21:16:41 by imgutier          #+#    #+#             */
/*   Updated: 2018/06/23 22:49:33 by imgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int prime;

	prime = 3;
	if (nb == 2 || nb == 3)
	{
		return (1);
	}
	else if (nb <= 1 || nb % prime == 0 || nb % 2 == 0 || nb % 3 == 0)
	{
		return (0);
	}
	while (nb % prime != 0)
	{
		if (nb % prime == 0)
		{
			return (0);
		}
		else
		{
			prime += 2;
		}
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
	{
		return (2);
	}
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
