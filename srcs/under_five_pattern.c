/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   under_five_pattern.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:31:56 by kiijima           #+#    #+#             */
/*   Updated: 2022/08/23 21:49:23 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	search_index(t_list *stack_a, int num)
{
	int		i;
	t_list	*head;

	i = 0;
	head = stack_a;
	while (head)
	{
		if (head->index == num)
			break;
		i++;
	}
	return (i);
}

put_min_to_b(t_list *stack_a, t_list *stack_b, int size, int index_pos)
{
	if (index_pos <= (size / 2))
	{
		while (index_pos != 0)
		{
			// ra(stack_a);
			index_pos--;
		}
	}
	else
	{
		while (index_pos != size)
		{
			// rra(stack_a);
			index_pos++;
		}
	}
	// pb(stack_a, stack_b);
}

under_five_pattern(t_list *stack_a, t_list *stack_b, int size)
{
	t_list	*head;
	int		index_pos;

	if (size > 3)
	{
		index_pos = search_index(stack_a, 0);
		if (size == 5)
			index_pos = search_index(stack_a, 1);
	}
	put_min_to_b(stack_a, stack_b, size, index_pos);
}

//indexのいちを特定
//indexを一番上に持っていき、pbする
//
