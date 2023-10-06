/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:08:27 by ctasar            #+#    #+#             */
/*   Updated: 2023/10/04 20:14:54 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_data *data)
{
	if (data->stack_a[data->a_len - 1] > data->stack_a[data->a_len - 2])
		swap_a(data);
}

void	sort_3(t_data *data)
{
	sort_2(data);
	if (data->stack_a[data->a_len - 1] > data->stack_a[data->a_len - 3])
		reverse_rotate_a(data);
	sort_2(data);
	if (data->stack_a[data->a_len - 2] > data->stack_a[data->a_len - 3])
	{
		reverse_rotate_a(data);
		swap_a(data);
	}
}

void	sort_4(t_data *data, int min)
{
	int	i;

	i = find_index(data, min);
	if (i == data->a_len - 2)
		rotate_a(data);
	if (i == data->a_len - 3)
	{
		rotate_a(data);
		rotate_a(data);
	}
	if (i == data->a_len - 4)
		reverse_rotate_a(data);
	if (!check_sorted_rdx(data))
	{
		push_b(data);
		sort_3(data);
		push_a(data);
	}
}

void	sort_5(t_data *data)
{
	int	i;

	i = find_index(data, 0);
	if (i == data->a_len - 2)
		rotate_a(data);
	if (i == data->a_len - 3)
	{
		rotate_a(data);
		rotate_a(data);
	}
	if (i == data->a_len - 4)
	{
		reverse_rotate_a(data);
		reverse_rotate_a(data);
	}
	if (i == data->a_len - 5)
		reverse_rotate_a(data);
	if (!check_sorted_rdx(data))
	{
		push_b(data);
		sort_4(data, 1);
		push_a(data);
	}
}

void	sorting(t_data *data)
{
	if (data->a_len == 2)
		sort_2(data);
	if (data->a_len == 3)
		sort_3(data);
	if (data->a_len == 4)
		sort_4(data, 0);
	if (data->a_len == 5)
		sort_5(data);
}
