/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prime.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zimbo <zimbo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:00:33 by zimbo             #+#    #+#             */
/*   Updated: 2025/11/24 16:53:07 by zimbo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

int	prime(int number)
{
	if (number <= 0)
		return (-1);
	int	index;
	int	count;

	index = 1;
	count = 0;
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