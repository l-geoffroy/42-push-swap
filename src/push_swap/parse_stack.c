/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 23:51:28 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/07/27 13:58:44 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		parse_stack(char **argv, int argc, t_conf *conf)
{
	int		i;
	int		j;
	int		nxt;

	i = 0;
	conf->nb_elem = argc - 1;
	conf->nb_elem_a = argc - 1;
	conf->nb_elem_b = 0;
	conf->stack_a = (int *)malloc(sizeof(0) * (conf->nb_elem + 1));
	conf->stack_b = (int *)malloc(sizeof(0) * (conf->nb_elem + 1));
	j = conf->nb_elem;
	while (i < argc - 1)
	{
		nxt = ft_atoi(argv[j]);
		if (argv[j][0] != '0' && nxt == 0)
			return (1);
		conf->stack_a[i] = nxt;
		j--;
		i++;
	}
	return (0);
}