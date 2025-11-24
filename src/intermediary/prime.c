/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prime.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zimbo <zimbo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:00:33 by zimbo             #+#    #+#             */
/*   Updated: 2025/11/24 17:01:14 by zimbo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

int	prime(int argc, char **argv)
{
	if (argc > 2)
	{
		perror("O número de argumentos não pode ser maior que 2!\nVocê só pode calcular um primo por vez.\nExemplo: ./calculadora 7\n");
		exit(1);
	}
	int	index;
	int	count;
	int	number;

	index = 1;
	count = 0;
	number = atoi(argv[1]);
	while (index <= number)
	{
		if (number % index == 0)
			count++;
		index++;
	}
	if (count > 2)
	{
		printf("Não é primo\n");
		return (0);
	}
	else
	{
		printf("É primo\n");
		return (1);
	}

}