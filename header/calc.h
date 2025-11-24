/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zimbo <zimbo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 04:26:33 by zimbo             #+#    #+#             */
/*   Updated: 2025/11/23 07:08:46 by zimbo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALC_H
# define CALC_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		options(int op, int argc, char **argv);
int		multiplication(int argc, char **argv);
int		subtration(int argc, char **argv);
int		factorial(int argc, char **argv);
double	division(int argc, char **argv);
int		square(int argc, char **argv);
int		power(int argc, char **argv);
int		sum(int argc, char **argv);
int		fibonacci(int number);
void	layout(void);

#endif