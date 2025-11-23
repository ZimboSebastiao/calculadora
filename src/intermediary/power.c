/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   power.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zimbo <zimbo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 06:43:45 by zimbo             #+#    #+#             */
/*   Updated: 2025/11/23 07:03:02 by zimbo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

int	power(int argc, char **argv)
{
	int	number;
	int	index;
	int	result;

	number = atoi(argv[2]);
	if (number < 0)
		return (0);
	if (argc > 3)
	{
		perror("O número de argumentos não pode ser maior que 3!\nVocê só pode calcular uma Potência por vez.\nExemplo: ./calculadora 2 3\nQue é equivalente para o programa à (2³)\n");
		exit(1);
	}
	result = 1;
	index = 0;
	while (index < number)
	{
		result *= atoi((argv[1]));
		index++;
	}
	return (result);
}