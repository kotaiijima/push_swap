/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:53:04 by kiijima           #+#    #+#             */
/*   Updated: 2022/08/22 18:25:39 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list *ft_lstnew(int value)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->value = value;
	new->index = DEFAULT_INDEX;
	new->next = NULL;
	return(new);
}

// int main()
// {
// 	t_list * n = ft_lstnew((void*)1);
// 	if (n->content == (void*)1)
// 		printf("content:OK\n");
// 	else
// 		perror("error\n");
// 	if (n->next == NULL)
// 		printf("next:OK\n");
// 	else
// 		perror("error\n");
// 	free(n);
// }
