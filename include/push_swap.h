/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 18:50:57 by kiijima           #+#    #+#             */
/*   Updated: 2022/08/25 22:32:23 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include	"../libft/libft.h"
# include	<stdbool.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}				t_list;

# define DEFAULT_INDEX -1

void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list **lst);
t_list	*ft_lstnew(int value);
int		ft_lstsize(t_list *lst);
void	put_error(void);
void	check_args(char **args);
bool	check_sort(t_list *stack_a);

void	under_5_pattern(t_list **stack_a, t_list **stack_b, int size);
void	size_3_pattern(t_list **stack_a, int size);
void	radix_sort(t_list **stack_a, t_list **stack_b, int a_size);

void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);

void	put_list(t_list *stack);
#endif
