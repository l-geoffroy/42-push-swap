/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 02:45:11 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/07/27 14:03:53 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include <stdio.h>

int		ra(t_conf *conf)
{
	int	*tmp;
	int	j;

	if (conf->nb_elem_a <= 1)
		return (1);
	tmp = (int *)malloc(sizeof(0) * (conf->nb_elem_a + 1));
	j = 0;
	tmp[0] = conf->stack_a[conf->nb_elem_a - 1];
 	while (j + 1 < conf->nb_elem_a)
	{
		tmp[j + 1] = conf->stack_a[j];
		j++;
	}
	j = 0;
	while (j < conf->nb_elem_a)
	{
		conf->stack_a[j] = tmp[j];
		j++;
	}
	free(tmp);
	ft_putstr("ra\n");
	return (0);
}

int		rb(t_conf *conf)
{
	int	*tmp;
	int	j;

	if (conf->nb_elem_b <= 1)
		return (1);
	tmp = (int *)malloc(sizeof(0) * (conf->nb_elem_b + 1));
	j = 0;
	tmp[conf->nb_elem_b - 1] = conf->stack_b[0];
 	while (j + 1 < conf->nb_elem_b)
	{
		tmp[j] = conf->stack_b[j + 1];
		j++;
	}
	j = 0;
	while (j < conf->nb_elem_b)
	{
		conf->stack_b[j] = tmp[j];
		j++;
	}
	free(tmp);
	ft_putstr("rb\n");
	return (0);
}

int	rr(t_conf *conf)
{
	ra(conf);
	rb(conf);
	return (0);
}
