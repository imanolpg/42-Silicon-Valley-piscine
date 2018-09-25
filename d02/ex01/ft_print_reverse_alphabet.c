/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgutier <imgutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 08:57:01 by imgutier          #+#    #+#             */
/*   Updated: 2018/06/21 22:12:37 by imgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
    char	z;

    z = '122';
    while (z >= '97')
    {
        ft_putchar(z);
        z--;
    }
}
