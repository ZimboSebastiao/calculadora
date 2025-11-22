/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zimbo <zimbo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 07:07:54 by zimbo             #+#    #+#             */
/*   Updated: 2025/11/22 07:27:02 by zimbo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

int	options(int op, int argc, char **argv)
{
	int	result;

	result = 0;
	switch (op)
	{
		case 1:
			result = printf("Soma: %d\n", sum(argc, argv));
			break;
		case 2:
			result = printf("Subtração: %d\n", subtration(argc, argv));
			break;
		case 3:
			result = printf("Multiplicação: %d\n", multiplication(argc, argv));
			break;
		case 4:
			result = printf("Divisão: %.2f\n", division(argc, argv));
			break;
		default:
			printf("Insira uma opção válida!\n");
	}
	return (result);
}