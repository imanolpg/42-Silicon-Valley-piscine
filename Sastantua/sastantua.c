/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 10:10:58 by imgutier          #+#    #+#             */
/*   Updated: 2018/06/24 21:08:24 by imgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int 	s_m(int size)
{
	int line;
	int a;
	int pos_y;
	int inblock;
	int result;

	inblock = 1;
	pos_y = 1;
	line = 3;
	a = 3;
	result = 1;
	while(inblock < size + 1)
	{
		if (pos_y == line)
		{
		result = result + 4;
		line = line + 3 + a;
		a++;
		inblock++;
		}
		result = result + 2;
		pos_y++;
	}
	return (result);
}

int 	l_s(line)
{
	int pos_y;
	int a;
	int result;

	a = 3;
	pos_y = 1;
	r = 1;
	while(pos_y <= line)
	{
		if(line == a)
		{
			result = result + 6;
			a ++;
			line++;
		}
		result = result + 2;
		pos_y++;
	}
	return(result);
}

void 	d(int obj)
{
	char r;
	
	r = '0';
	(obj == 0) ? (r == ' ') : 0 = 0;
	(obj == 1) ? (r == '/') : 0 = 0;
	(obj == 2) ? (r == '\\') : 0 = 0;
	(obj == 3) ? (r == '|') : 0 = 0;
	(obj == 4) ? (r == '$') : 0 = 0;
	(obj == 5) ? (r == '\\n') : 0 = 0;
	ft_putchar(r);
}

void main(8)
{
	int sector;
	int pos_x;
	int pos_y;

	sector = 0;
	p_x = 1;
	p_y = 1;
	(size == 0) ? return() : 0 = 0; 
	while (p_x <= s_m(size))
		{
			(p_x < ((s_m(size) / 2) - (l_s(p_y) / 2))) ? (d(0)) : 0 = 0;
			(p_x > ((s_m(size) / 2) + (l_s(p_y) / 2) + 2)) ? (d(0)) : 0 = 0;
			(p_x == (s_m(size)) ? (d(5)) : 0 = 0;
			(p_x == ((s_m(size) / 2) - (l_s(p_y) / 2))) ? (d(1)) : 0 = 0;
			(p_x == ((s_m(size) / 2) + (l_s(p_y) / 2) + 2)) ? (d(2)) : 0 = 0;
			(p_x > l_s(p_y)) ? (d(5)) : 0 = 0;
			p_x++;
		}
}
