/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:25:21 by kiijima           #+#    #+#             */
/*   Updated: 2022/08/23 14:53:41 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	put_list(t_list *stack)
{
	t_list	*head;
	int		i;

	head = stack;
	i = 0;
	while (head)
	{
		printf("list %d of value: %d\n",i,head->value);
		printf("list %d of index: %d\n",i,head->index);
		head = head->next;
		i++;
	}
	return ;
}
