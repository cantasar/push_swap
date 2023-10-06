/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:20:39 by ctasar            #+#    #+#             */
/*   Updated: 2023/10/06 23:36:45 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_bits(t_data *data)
{
	int	bit_size;
	int	size;

	bit_size = 0;
	size = data->a_len;
	while (size > 1)
	{
		bit_size++;
		size /= 2;
	}
	return (bit_size);
}

void	radix_sub_one(t_data *data, int i)
{
	if (check_sorted_rdx(data) == 0)
	{
		if (((data->stack_a[data->a_len - 1] >> i) & 1) == 0)
			push_b(data);
		else
			rotate_a(data);
	}
}

void	radix_sub_two(t_data *data, int i, int b_size, int max_bits)
{
	while (b_size-- && i <= max_bits)
	{
		if (((data->stack_b[data->b_len - 1] >> i) & 1) == 0)
			rotate_b(data);
		else
			push_a(data);
	}
}

void	radix_sort(t_data *data)
{
	int		i;
	int		j;
	int		size;
	int		b_size;
	int		max_bits;

	i = 0;
	max_bits = get_max_bits(data);
	while (i <= max_bits)
	{
		size = data->a_len;
		j = 0;
		while (j < size)
		{
			radix_sub_one(data, i);
			j++;
		}
		i++;
		b_size = data->b_len;
		radix_sub_two(data, i, b_size, max_bits);
	}
	while (data->b_len)
		push_a(data);
}
