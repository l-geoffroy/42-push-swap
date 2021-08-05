/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 02:45:11 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/07/27 13:50:59 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int		sa(t_conf *conf)
{
	int	tmp_a;
	int	tmp_b;

	if (conf->nb_elem_a <= 0)
		return (1);
	tmp_a = conf->stack_a[conf->nb_elem_a - 1];
	tmp_b = conf->stack_a[conf->nb_elem_a - 2];
	conf->stack_a[conf->nb_elem_a - 1] = tmp_b;
	conf->stack_a[conf->nb_elem_a - 2] = tmp_a;
	ft_putstr("sa\n");
	return (0);
}

int		sb(t_conf *conf)
{
	int	tmp_a;
	int	tmp_b;

	if (conf->nb_elem_b <= 0)
		return (1);
	tmp_a = conf->stack_b[conf->nb_elem_b - 1];
	tmp_b = conf->stack_b[conf->nb_elem_b - 2];
	conf->stack_b[conf->nb_elem_b - 1] = tmp_b;
	conf->stack_b[conf->nb_elem_b - 2] = tmp_a;
	ft_putstr("sb\n");
	return (0);
}

int		ss(t_conf *conf)
{
	sa(conf);
	sb(conf);
	ft_putstr("ss\n");
	return (0);
}