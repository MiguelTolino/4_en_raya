/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_en_raya.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 13:18:01 by mmateo-t          #+#    #+#             */
/*   Updated: 2020/02/18 01:42:09 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_winner(char tabla[4][4])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		if (tabla[i][0] == tabla[i][1] && tabla[i][1] == tabla[i][2] && tabla[i][2] == tabla[i][3])
		{
			return (1);
		}
		i++;
	}
	while (j < 4)
	{
		if (tabla[0][j] == tabla[1][j] && tabla[1][j] == tabla[2][j] && tabla[2][j] == tabla[3][j])
		{
			return (1);
		}
		j++;
	}
	if ((tabla[0][0] == tabla[1][1] && tabla[1][1] == tabla[2][2] && tabla[2][2] == tabla[3][3]) || ((tabla[3][0] == tabla[2][1] && tabla[2][1] == tabla[1][2] && tabla[1][2] == tabla[0][3])))
	{
		return (1);
	}
	return (0);
}

int is_equal(char tabla[4][4])
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tabla[i][j] >= 'a' && tabla[i][j] <= 'p')
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void create_table(char tabla[4][4])
{
	int i;
	int j;
	char count;

	count = 'a';
	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tabla[i][j] = count++;
			j++;
		}
		i++;
	}
}

void print_square(char tabla[4][4])
{
	int i, j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (j < 3)
				printf("%c | ", tabla[i][j]);
			else
			{
				printf("%c", tabla[i][j]);
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

void introducir_valor(char tabla[4][4], int jugador)
{
	char simbolo;
	char posicion;

	if (jugador == 1)
		simbolo = 'X';
	if (jugador == 2)
		simbolo = 'O';
		
		
		printf("JUGADOR %i:\tIntroduce la posicion en la que quieres poner tu simbolo: ", jugador);
		posicion_ocupada:
		//fflush(NULL);
		posicion = getchar();
		//scanf("%c", &posicion);
		printf("\n\n");
	while (posicion < 'a' || posicion > 'p')
	{
		printf("Posicion incorrecta, introduce nueva posicion : ");
		//fflush(NULL);
		posicion = getchar();
		//scanf("%c", &posicion);
		printf("\n\n");
	}
	int i = 0;
	int j = 0;
	int cont = 0;

	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tabla[i][j] == posicion)
			{
				tabla[i][j] = simbolo;
				cont++;
			}
			j++;
		}
		i++;
	}
	if (cont == 0)
	{
		printf("Posición actualmente utilizada, introduzca una nueva posición: ");
		goto posicion_ocupada;
	}
}

int main()
{
	int win;
	char tabla[4][4];
	create_table(tabla);
	system("clear");

	while (1)
	{
		print_square(tabla);
		introducir_valor(tabla, 1);
		system("clear");
		print_square(tabla);
		if ((win = is_winner(tabla)))
		{
			system("clear");
			printf("\nGANADOR JUGADOR 1!\nEnhorabuena!\n\n");
			print_square(tabla);
			break;
		}
		if (is_equal(tabla))
		{
			system("clear");
			printf("\nEMPATE\n\n");
			print_square(tabla);
			return (0);
		}
		introducir_valor(tabla, 2);
		if ((win = is_winner(tabla)))
		{
			system("clear");
			printf("\nGANADOR JUGADOR 2!\nEnhorabuena!\n\n");
			print_square(tabla);
			break;
		}
		if (is_equal(tabla))
		{
			system("clear");
			printf("\nEMPATE\n");
			print_square(tabla);
			return (0);
		}
		system("clear");
	}
	return (0);
}
