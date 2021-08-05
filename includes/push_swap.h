/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 23:54:14 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/07/26 08:46:09 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct t_conf
{
	int		nb_elem;
	int		nb_elem_a;
	int		nb_elem_b;
	int		index_piv_a;
	int		*stack_a;
	int		*stack_b;
	int		val_piv_a;
}	t_conf;

int		parse_stack(char **argv, int argc, t_conf *conf);
void	print_stacks(t_conf *conf);

void	free_conf(t_conf *conf);

int		sa(t_conf *conf);
int		sb(t_conf *conf);
int		ss(t_conf *conf);
int		pb(t_conf *conf);
int		pa(t_conf *conf);
int		rra(t_conf *conf);
int		rrb(t_conf *conf);
int		rrr(t_conf *conf);
int		ra(t_conf *conf);
int		rb(t_conf *conf);
int		rr(t_conf *conf);

int		main_sort(t_conf *conf);

#endif