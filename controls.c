/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:30:43 by ctasar            #+#    #+#             */
/*   Updated: 2023/10/09 23:01:56 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_nums_sub(char **all_args, int i)
{
	long	nb;

	while (all_args[i])
	{
		if (!num_control(all_args[i]))
			error();
		nb = ft_atol(all_args[i]);
		if (dup_control(nb, all_args, i))
			error();
		if (nb < -2147483648 || nb > 2147483647)
			error();
		i++;
	}
}

void	check_nums(int argc, char **argv)
{
	char	**all_args;
	int		i;

	if (argc == 2)
	{
		all_args = ft_split(argv[1], ' ');
		check_nums_sub(all_args, 0);
		i = 0;
		while (all_args[i])
		{
			free(all_args[i]);
			i++;
		}
		free(all_args);
	}
	else
		check_nums_sub(argv, 1);
}

void	check_sorted(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->a_len - 1)
	{
		if (data->stack_a[i] > data->stack_a[i + 1])
			i++;
		else
			return ;
	}
	exit(0);
}

int	check_sorted_rdx(t_data *index)
{
	int	i;

	i = 0;
	while (i < index->a_len - 1)
	{
		if (index->stack_a[i] > index->stack_a[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}
