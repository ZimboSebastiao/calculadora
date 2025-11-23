/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   factorial.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zimbo <zimbo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 05:39:15 by zimbo             #+#    #+#             */
/*   Updated: 2025/11/23 06:13:43 by zimbo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

int	factorial(int argc, char **argv)
{
	if (argc > 2)
	{
		perror("O número de argumentos não pode ser maior que 2!\nVocê só pode calcular um fatorial por vez.\nExemplo: ./calculadora 5\n");
		exit(1);
	}
	int	fatorial;
	int	number;
	int	index;

	index = 1;
	number = atoi(argv[1]);
	fatorial = atoi(argv[1]);
	while (index < number)
	{
		fatorial = fatorial * index;
		index++;
	}
	return (fatorial);
}