/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zimbo <zimbo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 04:25:06 by zimbo             #+#    #+#             */
/*   Updated: 2025/11/22 06:53:00 by zimbo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

int main(int argc, char **argv)
{

	if (argc > 1)
	{
		printf("Soma: %d\n", sum(argc, argv));
		printf("Subtração: %d\n", subtration(argc, argv));
		printf("Multiplicação: %d\n", multiplication(argc, argv));
		printf("Divisão: %.2f\n", division(argc, argv));
	}
	return (0);
}