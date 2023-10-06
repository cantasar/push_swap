/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:30:43 by ctasar            #+#    #+#             */
/*   Updated: 2023/10/06 15:33:01 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_nums(int argc, char **argv)
{
	char	**all_args;
	long	nb;
	int		i;

	if (argc == 2)
	{
		i = 0;
		all_args = ft_split(argv[1], ' ');
		while (all_args[i])
		{
			nb = ft_atol(all_args[i]);
			if (!num_control(all_args[i]))
				error();
			if (dup_control(nb, all_args, i))
				error();
			if (nb < -2147483648 || nb > 2147483647)
				error();
			i++;
		}
		i = 0;
		while (all_args[i])
		{
			free(all_args[i]);
			i++;
		}
		free(all_args);
	}
	else
	{
		i = 1;
		while (argv[i])
		{
			nb = ft_atol(argv[i]);
			if (!num_control(argv[i]))
				error();
			if (dup_control(nb, argv, i))
				error();
			if (nb < -2147483648 || nb > 2147483647)
				error();
			i++;
		}
	}
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
			++i;
		else
			return (0);
	}
	return (1);
}
