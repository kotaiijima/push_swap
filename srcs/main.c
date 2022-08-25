/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 18:49:42 by kiijima           #+#    #+#             */
/*   Updated: 2022/08/25 22:28:58 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	setting_index(t_list **stack_a, int index)
{
	t_list	*head;
	t_list	*min;

	head = *stack_a;
	min = NULL;
	while (head)
	{
		if (head->index == DEFAULT_INDEX && \
			(min == NULL || head->value < min->value))
			min = head;
		head = head->next;
	}
	min->index = index;
}

int	init_stack_a(t_list **stack_a, char **argv)
{
	t_list	*new;
	int		i;
	int		index;
	int		stack_a_size;
	char	**args;

	args = argv;
	check_args(args);
	*stack_a = ft_lstnew(ft_atoi(args[1]));
	i = 2;
	while (args[i])
	{
		new = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(stack_a, new);
		i++;
	}
	index = 0;
	stack_a_size = ft_lstsize(*stack_a);
	while (index < stack_a_size)
	{
		setting_index(stack_a, index);
		index++;
	}
	return (stack_a_size);
}

bool	check_sort(t_list *stack_a)
{
	t_list	*head;
	int		i;

	head = stack_a;
	i = head->index;
	while (head)
	{
		if (head->index == i)
		{
			head = head->next;
			i++;
		}
		else
			return (false);
	}
	return (true);
}

void	free_stack(t_list **stack)
{
	t_list	*tmp;

	while (*stack)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		stack_a_size;

	if (argc < 2)
		return (0);
	stack_a_size = init_stack_a(&stack_a, argv);
	if (check_sort(stack_a) || stack_a_size == 1)
	{
		free_stack(&stack_a);
		return (0);
	}
	stack_b = NULL;
	if (stack_a_size <= 5)
		under_5_pattern(&stack_a, &stack_b, stack_a_size);
	else
		radix_sort(&stack_a, &stack_b, stack_a_size);
	free_stack(&stack_a);
	return (0);
}
