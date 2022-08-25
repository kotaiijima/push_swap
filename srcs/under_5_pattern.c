/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   under_5_pattern.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:31:56 by kiijima           #+#    #+#             */
/*   Updated: 2022/08/25 22:30:44 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	search_index(t_list **stack_a, int num)
{
	int		i;
	t_list	*head;

	i = 0;
	head = *stack_a;
	while (head)
	{
		if (head->index == num)
			break ;
		head = head->next;
		i++;
	}
	return (i);
}

void	put_min_to_b(t_list **stack_a, t_list **stack_b, \
		int size, int index_pos)
{
	int	i;

	i = index_pos;
	if (i <= (size / 2))
	{
		while (i != 0)
		{
			ra(stack_a);
			i--;
		}
	}
	else
	{
		while (i != size)
		{
			rra(stack_a);
			i++;
		}
	}
	pb(stack_a, stack_b);
}

void	under_5_pattern(t_list **stack_a, t_list **stack_b, int size)
{
	int	index_pos;

	if (size > 3)
	{
		index_pos = search_index(stack_a, 0);
		put_min_to_b(stack_a, stack_b, size, index_pos);
		if (size == 5)
		{
			index_pos = search_index(stack_a, 1);
			put_min_to_b(stack_a, stack_b, size - 1, index_pos);
		}
	}
	else if (size == 2)
	{
		sa(stack_a);
		return ;
	}
	size_3_pattern(stack_a, size);
	while (*stack_b)
		pa(stack_a, stack_b);
}
