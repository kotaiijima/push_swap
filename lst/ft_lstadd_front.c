/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:52:56 by kiijima           #+#    #+#             */
/*   Updated: 2022/08/22 18:39:32 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int main()
// {
// 	t_list *lst2 = ft_lstnew("hello ");
// 	t_list *lst1 = ft_lstnew("world");
// 	ft_lstadd_front(&lst1, lst2);
// 	while(1)
// 	{
// 		printf("%s",(char *)lst1->content);
// 		if(lst1->next == NULL)
// 			break;
// 		lst1 = lst1->next;
// 	}
// }
