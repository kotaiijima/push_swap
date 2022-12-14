/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:48:07 by kiijima           #+#    #+#             */
/*   Updated: 2022/08/25 22:26:57 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push(t_list **stack_to, t_list **stack_from)
{
	t_list	*tmp;

	tmp = *stack_from;
	*stack_from = (*stack_from)->next;
	if (ft_lstsize(*stack_to) == 0)
	{
		tmp->next = NULL;
		*stack_to = tmp;
	}
	else
	{
		tmp->next = *stack_to;
		*stack_to = tmp;
	}
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
	ft_putendl_fd("pa", 1);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	push(stack_b, stack_a);
	ft_putendl_fd("pb", 1);
}
