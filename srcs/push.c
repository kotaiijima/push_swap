/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:48:07 by kiijima           #+#    #+#             */
/*   Updated: 2022/08/24 13:00:18 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push(t_list **stack_to, t_list **stack_from)
{
	t_list *tmp;

	tmp = *stack_from;
	*stack_from = (*stack_from)->next;
	if (ft_lstsize(*stack_to) == 0)
	{
		tmp->next = NULL;
		*stack_to = tmp;
	}
	else
		tmp->next = *stack_to;
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	push(stack_b, stack_a);
}
