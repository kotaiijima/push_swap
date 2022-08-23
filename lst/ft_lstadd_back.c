/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:52:46 by kiijima           #+#    #+#             */
/*   Updated: 2022/08/22 18:33:21 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst)
	{
		last = ft_lstlast(lst);
		last->next = new;
		new->next = NULL;
	}
	else
	{
		*lst = new;
		new->next = NULL;
	}
}

// int main()
// {
// 	t_list *lst1 = ft_lstnew("aaa");
// 	t_list *lst2 = ft_lstnew("bbb");
// 	ft_lstadd_back(&lst1, lst2);
// 	lst1 = lst1->next;

// 	printf("%s", (char *)lst1->content);
// }
