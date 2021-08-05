/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 00:37:18 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/07/26 08:56:47 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	print_stacks(t_conf *conf)
{
	int		i;

	i = 0;
	ft_putstr("\t\tA: \t");
	while (conf->nb_elem_a > 0 && i < conf->nb_elem_a)
	{
		ft_putnbr(conf->stack_a[i]);
		ft_putstr("  ");
		i++;
	}
	ft_putstr(" ( ");
	ft_putnbr(conf->nb_elem_a);
	ft_putstr(" )\n");
	i = 0;
	ft_putstr("\t\tB: \t");
	while (conf->nb_elem_b > 0 && i < conf->nb_elem_b)
	{
		ft_putnbr(conf->stack_b[i]);
		ft_putstr("  ");
		i++;
	}
	ft_putstr(" ( ");
	ft_putnbr(conf->nb_elem_b);
	ft_putstr(" )\n");
}