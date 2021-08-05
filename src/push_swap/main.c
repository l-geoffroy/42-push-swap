/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 23:46:26 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/07/27 16:18:30 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	t_conf	conf;

	parse_stack(argv, argc, &conf);
	printf("NB elem: %d\n", conf.nb_elem);
	print_stacks(&conf);
	//ra(&conf);
	main_sort(&conf);
	free_conf(&conf);
	(void)argc;
	(void)argv;
	return (0);
}