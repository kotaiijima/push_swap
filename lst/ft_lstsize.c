/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:53:37 by kiijima           #+#    #+#             */
/*   Updated: 2022/08/25 22:24:40 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

// int main()
// {
// 	t_list *lst = ft_lstnew("hello ");
// 	t_list *lst2 = ft_lstnew("world");
// 	ft_lstadd_front(&lst2, lst);
// 	printf("%d\n",ft_lstsize(lst2));
// 	ft_lstadd_front(&lst2, ft_lstnew((void*)1));
// 	printf("%d\n",ft_lstsize(lst2));
// }
