/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 02:49:54 by miguel            #+#    #+#             */
/*   Updated: 2020/02/18 03:07:16 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "4_en_raya.h"

int check(char tabla[4][4], char simbol)
{
    is_winner(tabla, simbol);
    is_equal(tabla, simbol);
}

int is_winner(char tabla[4][4], char simbol)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		if (tabla[i][0] == simbol && tabla[i][0] == tabla[i][1] && tabla[i][1] == tabla[i][2] && tabla[i][2] == tabla[i][3])
		{
			return (1);
		}
		i++;
	}
	while (j < 4)
	{
		if (tabla[0][j] == simbol && tabla[0][j] == tabla[1][j] && tabla[1][j] == tabla[2][j] && tabla[2][j] == tabla[3][j])
		{
			return (1);
		}
		j++;
	}
	if ((tabla[0][0] == simbol && tabla[0][0] == tabla[1][1] && tabla[1][1] == tabla[2][2] && tabla[2][2] == tabla[3][3]) || ((tabla[3][0] == simbol && tabla[3][0] == tabla[2][1] && tabla[2][1] == tabla[1][2] && tabla[1][2] == tabla[0][3])))
	{
		return (1);
	}
	return (0);
}

int is_equal(char tabla[4][4], char simbol)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tabla[i][j] == ' ')
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}