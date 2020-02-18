/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_en_raya.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 02:15:39 by miguel            #+#    #+#             */
/*   Updated: 2020/02/18 03:11:19 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void create_table(char tabla[4][4]);
void print_square(char tabla[4][4]);
void gameloop(char table[4][4]);
int is_winner(char tabla[4][4], char simbol);
int is_equal(char tabla[4][4], char simbol);
int check(char tabla[4][4], char simbol);
void intro_simbol(char table[4][4],char simbol);






