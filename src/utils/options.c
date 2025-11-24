/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zimbo <zimbo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 07:07:54 by zimbo             #+#    #+#             */
/*   Updated: 2025/11/24 16:57:48 by zimbo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

int	options(int op, int argc, char **argv)
{
	int	result;
	int	number;

	number = atoi(argv[1]);
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
		case 5:
			result = printf("Fatorial: %d\n", factorial(argc, argv));
			break;
		case 6:
			result = printf("Fibonacci: %d\n", fibonacci(number));
			break;
		case 7:
			result = printf("Potência: %d\n", power(argc, argv));
			break;
		case 8:
			result = printf("Raiz: %d\n", square(argc, argv));
			break;
		case 9:
			result = printf("Máximo divisor comum: %d\n", mdc(argc, argv));
			break;
		case 10:
			result = prime(argc, argv);
			break;
		default:
			printf("Insira uma opção válida!\n");
	}
	return (result);
}