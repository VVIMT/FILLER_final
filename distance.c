/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvimo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 22:56:16 by vinvimo           #+#    #+#             */
/*   Updated: 2017/09/18 22:56:18 by vinvimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

long	tmp_distance(t_struct *t, char enemy)
{
	distanceh1(t, enemy);
	distanceh2(t, enemy);
	distancev1(t, enemy);
	distancev2(t, enemy);
	return (ft_power(t->dis_hor, 2) + ft_power(t->dis_ver, 2));
}

long	distance(t_struct *t)
{
	return (ft_power(t->dis_x, 2) + ft_power(t->dis_y, 2));
}
