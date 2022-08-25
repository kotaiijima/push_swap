/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:21:12 by kiijima           #+#    #+#             */
/*   Updated: 2022/08/25 16:24:20 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	get_max_bit(int index)
{
	int	max_bit;
	int	tmp;

	max_bit = 0;
	tmp = index;
	while (tmp)
	{
		tmp = tmp / 2;
		max_bit++;
	}
	return (max_bit);
}

void	radix_sort(t_list **stack_a, t_list **stack_b, int a_size)
{
	int	i;
	int	j;
	int	max_bit;

	max_bit = get_max_bit(a_size - 1);
	i = 0;
	while (i < max_bit)
	{
		j = 0;
		while (j < a_size)
		{
			if ((*stack_a)->index >> i & 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (*stack_b != NULL)
			pa(stack_a, stack_b);
		i++;
	}
}
