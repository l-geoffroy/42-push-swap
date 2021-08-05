/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 04:17:34 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/07/26 04:27:05 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int		pa(t_conf *conf)
{
	int	tmp_b;

	if (conf->nb_elem_b <= 0)
		return (1);
	tmp_b = conf->stack_b[conf->nb_elem_b - 1];
	conf->stack_a[conf->nb_elem_a] = tmp_b;
	conf->stack_b[conf->nb_elem_b - 1] = 0;
	conf->nb_elem_b--;
	conf->nb_elem_a++;
	ft_putstr("pa\n");
	return (0);
}

int		pb(t_conf *conf)
{
	int	tmp_b;

	if (conf->nb_elem_a <= 0)
		return (1);
	tmp_b = conf->stack_a[conf->nb_elem_a - 1];
	conf->stack_b[conf->nb_elem_b] = tmp_b;
	conf->stack_a[conf->nb_elem_a - 1] = 0;
	conf->nb_elem_a--;
	conf->nb_elem_b++;
	ft_putstr("pb\n");
	return (0);
}