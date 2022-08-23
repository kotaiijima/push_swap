/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 18:50:57 by kiijima           #+#    #+#             */
/*   Updated: 2022/08/23 17:59:50 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../libft/libft.h"
#include <stdbool.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
	struct s_list	*prev;
}				t_list;

# define DEFAULT_INDEX -1

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list **lst);
t_list	*ft_lstnew(int value);
int		ft_lstsize(t_list *lst);
void	put_error(void);
void	check_args(char **args);
void	put_list(t_list *stack);

#endif
