/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 02:45:11 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/07/27 14:04:07 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int		rra(t_conf *conf)
{
	int	*tmp;
	int	j;

	if (conf->nb_elem_a <= 1)
		return (1);
	tmp = (int *)malloc(sizeof(0) * (conf->nb_elem_a + 1));
	j = 0;
	tmp[conf->nb_elem_a - 1] = conf->stack_a[0];
 	while (j + 1 < conf->nb_elem_a)
	{
		tmp[j] = conf->stack_a[j + 1];
		j++;
	}
	j = 0;
	while (j < conf->nb_elem_a)
	{
		conf->stack_a[j] = tmp[j];
		j++;
	}
	free(tmp);
	ft_putstr("rra\n");
	return (0);
}

int		rrb(t_conf *conf)
{
	int	*tmp;
	int	j;

	if (conf->nb_elem_b <= 1)
		return (1);
	tmp = (int *)malloc(sizeof(0) * (conf->nb_elem_b + 1));
	j = 0;
	tmp[0] = conf->stack_b[conf->nb_elem_b - 1];
 	while (j + 1 < conf->nb_elem_b)
	{
		tmp[j + 1] = conf->stack_b[j];
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

int	rrr(t_conf *conf)
{
	rra(conf);
	rrb(conf);
	return (0);
}