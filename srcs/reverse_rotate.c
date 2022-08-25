/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 22:46:54 by kiijima           #+#    #+#             */
/*   Updated: 2022/08/25 22:29:17 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	reverse_rotate(t_list **stack)
{
	t_list	*last;
	t_list	*head;

	head = *stack;
	last = ft_lstlast(stack);
	while (head->next->index != last->index)
		head = head->next;
	head->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	rra(t_list **stack_a)
{
	reverse_rotate(stack_a);
	ft_putendl_fd("rra", 1);
}

void	rrb(t_list **stack_b)
{
	reverse_rotate(stack_b);
	ft_putendl_fd("rrb", 1);
}
