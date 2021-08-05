/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 05:57:14 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/07/28 23:10:33 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include <stdio.h>

int		find_pivot(int *stack, int len)
{
	int	f;
	int	m;
	int	e;
	int	piv;
	int	i;

	f = stack[0];
	m = stack[len/2];
	e = stack[len - 1];
	i = 0;
	if ((f > m) ^ (f > e)) 
        piv = f;
    else if ((m < f) ^ (m < e)) 
        piv = m;
    else
        piv = e;
	while (i < len)
	{
		if (stack[i] == piv)
			return (i);
		i++;
	}
	return (0);
}

/*
pIndex = start;
pivot  = arr[end];

for(i = start; i < end - 1; i++)
{
    if (arr[i] < pivot)
    {
        swap arr[i] and arr[pIndex]
        increment pIndex by 1.
    }

    Finally, swap (arr[end], arr[pIndex]).
    return pIndex.
}
*/

void	sort_b(t_conf *conf, int piv, int val_piv)
{
	int	i;
	i = 0;
	while (i < conf->nb_elem_b)
	{
		if (conf->stack_b[i] < val_piv)
		{
			sa(conf);
		}
		i++;
	}
	(void)piv;
}

void	core_sort(t_conf *conf)
{
	int	nb_chunks;
	int	chunks_len;
	int	hold_first;

	nb_chunks = 5;
	chunks_len = conf->nb_elem / nb_chunks;
	
	printf("\t%d chunks of %d elements.\n", nb_chunks, chunks_len);
}
int		main_sort(t_conf *conf)
{
	core_sort(conf);
	return (0);
}
