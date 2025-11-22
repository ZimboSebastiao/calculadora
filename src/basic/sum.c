/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zimbo <zimbo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 04:42:27 by zimbo             #+#    #+#             */
/*   Updated: 2025/11/22 05:54:06 by zimbo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

int	sum(int argc, char **argv)
{
	int	index;
	int total;

	index = 1;
	total = 0;
	while (index < argc)
	{
		total += atoi(*(argv + index));
		index++;
	}
	return (total);
}