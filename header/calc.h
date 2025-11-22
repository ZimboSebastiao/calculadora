/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zimbo <zimbo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 04:26:33 by zimbo             #+#    #+#             */
/*   Updated: 2025/11/22 07:03:04 by zimbo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALC_H
# define CALC_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		multiplication(int argc, char **argv);
int		subtration(int argc, char **argv);
double	division(int argc, char **argv);
int		sum(int argc, char **argv);
void	layout(void);

#endif