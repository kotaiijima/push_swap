/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiijima <kiijima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:27:49 by kiijima           #+#    #+#             */
/*   Updated: 2022/08/23 22:21:28 by kiijima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

bool	check_num_and_over(const char *arg, long long *num)
{
	int			i;
	bool		minus;

	i = 0;
	if (arg[i] == '-' || arg[i] == '+')
		if (arg[i++] == '-')
			minus = true;
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]))
			return (true);
		*num = (*num * 10) + (arg[i] - '0');
		i++;
	}
	if (minus)
		*num *= -1;
	if ((int)*num < INT_MIN || INT_MAX < (int)*num)
		return (true);
	return (false);
}

bool	check_dup(char **arg, long long *num, int i)
{
	int n;

	n = i + 1;
	while (arg[n])
	{
		if (arg[n] == ft_itoa(*num))
			return (true);
		n++;
	}
	return (false);
}

void	check_args(char **args)
{
	int	i;
	long long	*num;

	i = 1;
	num = (long long *)malloc(sizeof(num) * 1);
	while (args[i])
	{
		if (check_num_and_over(args[i], num))
			put_error();
		if (check_dup(args, num, i))
			put_error();
		i++;
	}
	free(num);
}
