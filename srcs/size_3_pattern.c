/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_3_pattern.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:34:42 by kiijima           #+#    #+#             */
/*   Updated: 2022/08/25 22:27:22 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	size_3_pattern(t_list **stack_a, int size)
{
	if (check_sort(*stack_a))
		return ;
	if ((*stack_a)->index == (size - 3))
	{
		ra(stack_a);
		sa(stack_a);
		rra(stack_a);
	}
	else if ((*stack_a)->index == (size - 2))
	{
		if ((*stack_a)->next->index == (size - 3))
			sa(stack_a);
		else
			rra(stack_a);
	}
	else if ((*stack_a)->index == (size - 1))
	{
		if ((*stack_a)->next->index == (size - 3))
			ra(stack_a);
		else
		{
			sa(stack_a);
			rra(stack_a);
		}
	}
}
