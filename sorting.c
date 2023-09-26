/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:47:25 by ctasar            #+#    #+#             */
/*   Updated: 2023/09/20 00:39:08 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorted_stack(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->a_len - 1)
	{
		if (data->stack_a[i] > data->stack_a[i + 1])
			++i;
		else
			return (0);
	}
	return (1);
}

void	three_arg(t_data *data)
{
	if (data->stack_a[data->a_len - 1] > data->stack_a[data->a_len - 2])
		swap_a(data);
	if (data->stack_a[data->a_len - 2]
		> data->stack_a[data->a_len - 3])
	{
		push_b(data);
		swap_a(data);
		push_a(data);
	}
	if (check_sorted_stack(data) == 0)
		sorting(data);
	if (data->b_len == 0)
	{
		exit_swap(data);
	}
}

void	four_arg(t_data *data)
{
	int	i;
	int	first;
	int	index;

	i = 0;
	index = finder(data);

	first = 0;
	if (data->b_len > 0)
		first = 1;
	while (i < data->a_len)
	{
		if (data->stack_a[data->a_len - 1] == first)
		{
			four_sort(data);
			break ;
		}
		i++;
		if (index <= 2)
			rotate_a(data);
		else
			reverse_rotate_a(data);
	}
	if (data->b_len == 0)
		exit_swap(data);
}

void	five_arg(t_data *data)
{
	int	i;
	int	index;

	i = 0;
	index = find_first(data);
	while (i < data->a_len)
	{
		if (data->stack_a[data->a_len - 1] == 0)
		{
			push_b(data);
			four_sort(data);
			push_a(data);
			break ;
		}
		i++;
		if (index <= 2)
			rotate_a(data);
		else
			reverse_rotate_a(data);
	}
	exit_swap(data);
}

void	sorting(t_data *data)
{
	if (data->a_len == 3)
		three_arg(data);
	if (data->a_len == 4)
		four_arg(data);
	if (data->a_len == 5)
		five_arg(data);
}
