/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fibonacci.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zimbo <zimbo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 06:15:15 by zimbo             #+#    #+#             */
/*   Updated: 2025/11/23 06:41:44 by zimbo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

int	fibonacci(int number)
{
	if (number == 1)
		return (1);
	if (number <= 0)
		return (0);
	return (fibonacci(number - 2) + fibonacci(number - 1));
}