/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameloop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 02:20:03 by miguel            #+#    #+#             */
/*   Updated: 2020/02/19 00:15:26 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "4_en_raya.h"

void gameloop(char table[4][4])
{
    int win;
    char simbol1;
    char simbol2;

    simbol1 = 'X';
    simbol2 = 'O';
    win = 0;
    while (!win)
    {
        intro_simbol(table, simbol1);
        if(win = check(table, simbol1))
            break;
        print_square(table);
        system("clear");
        intro_simbol(table, simbol2);
        if (win = check(table, simbol2))
            break;
        print_square(table);
    }
    
}