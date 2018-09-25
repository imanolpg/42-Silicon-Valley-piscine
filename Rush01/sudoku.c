/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgutier <imgutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 16:08:41 by imgutier          #+#    #+#             */
/*   Updated: 2018/07/01 17:48:39 by imgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void check_row(**argv, int posy){
    int i;
    int result;

    i = 0;
    result = 0;
    while (i < 9)
    {
        result = result + argv[i][posy];
    }
    if (result == 45)
    {
        return (0);
    }
    else
    {
        return (1);
    }
}

void check_column(**argv, int posx){
    int i;
    int result;

    i = 0;
    result = 0;
    while (i < 9)
    {
        result = result + argv[posx][i];
    }
    if (result == 45)
    {
        return (0);
    }
    else
    {
        return (1);
    }
}

void check_level(**argv, int level, int pos){
    if
}

void giveval(**argv, **argv[posx][posy])
{
    
}

void smaker(**argv)
{
    int posx;
    int posy;
    int level;

    posx = 0;
    posy = 0;
    level = 0;
    while (level < 9)
    {
        while (check_row != 0 && check_column != 0)
        {
            if (argv[posx][posy] == '.')
            {
                argv[posx][posy] = giveval(argv, argv[posx][posy]);
            }
        }
    }
}

int     main(int argc, char **argv)
{
    int level;

    level = 0;
    if (argc != 10)
    {
        write(1, "Error\n", 5);
    }
    else
    {
        smaker(**argv);
    }
}
