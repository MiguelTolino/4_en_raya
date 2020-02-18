/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 02:23:19 by miguel            #+#    #+#             */
/*   Updated: 2020/02/18 23:40:28 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "4_en_raya.h"

void print_square(char tabla[4][4])
{
	int i, j;

	i = 0;

	printf("1   2   3   4 \n");

	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (j < 3)
			{
				printf(" %c |", tabla[i][j]);
			}
			else
			{
				printf("%c ", tabla[i][j]);
			}
			j++;
		}
		if (i < 3)
		{
			printf("\n--------------\n");
		}
		i++;
	}
	printf("\n\n");
}