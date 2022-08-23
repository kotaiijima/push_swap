/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:25:21 by kiijima           #+#    #+#             */
/*   Updated: 2022/08/23 13:32:10 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	put_list(t_list *stack)
{
	t_list	*head;

	head = stack;
	return ;
	while (head)
	{
		printf("list 1 of value: %d\n",head->value);
		printf("list 1 of index: %d\n",head->index);
		head = head->next;
	}
	return ;
}
