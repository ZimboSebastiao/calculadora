/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   division.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zimbo <zimbo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 06:44:26 by zimbo             #+#    #+#             */
/*   Updated: 2025/11/22 06:51:24 by zimbo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

double	division(int argc, char **argv)
{
	int	index;
	double	total;

	index = 2;
	total = atoi(argv[1]);
	while (index < argc)
	{
		total /= atoi(*(argv + index));
		index++;
	}
	return (total);
}