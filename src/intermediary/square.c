/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zimbo <zimbo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 07:06:05 by zimbo             #+#    #+#             */
/*   Updated: 2025/11/24 15:57:05 by zimbo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

int	square(int argc, char **argv)
{
	if (argc > 3)
	{
		perror("O número de argumentos não pode ser maior que 2!\nVocê só pode calcular uma raiz por vez.\nExemplo: ./calculadora 3 125\nQue parao programa seria equivalente à raiz cúbica(125)");
		exit(1);
	}
	int	number;
	int	index;
	int	result;
	int	sqr;
	int j;

	number = atoi(argv[2]);
	sqr = atoi(argv[1]);
	index = 1;
	if (sqr <= 0)
		return (-1);
	while (index <= number)
	{
		result = 1;
		j = 0;
		while(j < sqr)
		{
			result *= index;
			if (result > number)
				break;
			j++;
		}
		if (result == number)
			return (index);
		index++;
	}
	return (-1);
}