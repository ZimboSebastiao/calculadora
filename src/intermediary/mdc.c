/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mdc.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zimbo <zimbo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:58:18 by zimbo             #+#    #+#             */
/*   Updated: 2025/11/24 16:43:15 by zimbo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

static int mdc_two(int a, int b)
{
	while (b != 0)
	{
		int	temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}

int	mdc(int argc, char **argv)
{
	int		index;
	double	result;

	index = 2;
	result = atoi(argv[1]);
	while (index < argc)
	{
		result = mdc_two(result, atoi(argv[index]));
		index++;
	}
	return (result);
}