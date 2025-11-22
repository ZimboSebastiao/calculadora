/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multiplication.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zimbo <zimbo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 06:39:08 by zimbo             #+#    #+#             */
/*   Updated: 2025/11/22 06:43:10 by zimbo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

int multiplication(int argc, char **argv)
{
	int	index;
	int	total;

	index = 2;
	total = atoi(argv[1]);
	while (index < argc)
	{
		total *= atoi(*(argv + index));
		index++;
	}
	return (total);
}