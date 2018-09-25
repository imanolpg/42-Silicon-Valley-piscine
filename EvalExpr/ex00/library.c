/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 21:53:45 by imgutier          #+#    #+#             */
/*   Updated: 2018/07/08 22:07:25 by imgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int		operators_counter(char **str)
{
	int num;

	num = 0;
	if (**str == '(')
	{ 
		str++;
		num = ParseSummands(str);
		if (**str == ')')
		{ 
			str++;
		}
		return (num);
	}
	while (**str >= '0' && **str <= '9')
	{
		num = 10 * num + (**str - '0');
        str++;
	}
	return (num);
}

int ParseFactors(char** str)
{
    char op;

    int num1 = operators_counter(str);
    while (**str != '\0')
    {
        op = **str;
        if(op != '/' && op != '*' && op != '%')
            return num1;
        str++;
        int num2 = operators_counter(str);
        if(op == '/')
            num1 /= num2;
        else if(op == '*')
            num1 *= num2;
        else if (op == '%')
        	num1 %= num2;
    }
    return (num1);
}

int ParseSummands(char** str)
{
    char op;

    int num1 = ParseFactors(str);
    while (**str != '\0')
    {
         op = **str;
        if(op != '-' && op != '+')
            return num1;
        str++;
        int num2 = ParseFactors(str);
        if(op == '-')
            num1 -= num2;
        else
            num1 += num2;
    }
    return (num1);
}

int eval_expr(char* str)
{
    char    *temp;
    
    temp = space_rmover(str);
    return ParseSummands(&temp);
};






