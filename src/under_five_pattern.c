/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   under_five_pattern.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:31:56 by kiijima           #+#    #+#             */
/*   Updated: 2022/08/23 12:34:29 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	search_index(t_list *stack_a, int num)
{
	int	i;
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

}
