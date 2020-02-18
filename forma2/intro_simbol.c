/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intro_simbol.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 02:40:56 by miguel            #+#    #+#             */
/*   Updated: 2020/02/19 00:16:50 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "4_en_raya.h"

void intro_simbol(char table[4][4],char simbol)
{
    int position;
    int i;

    i = 0;
    printf("Player 1. Choose column: ");
    position = getchar() - '0';
    while (table[i][position] == ' ' && i < 4)
    {
        i++;
    }
    table[i - 1][position] = simbol;
    
    
}