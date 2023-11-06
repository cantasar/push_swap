/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:20:39 by ctasar            #+#    #+#             */
/*   Updated: 2023/10/10 20:07:21 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_bit(t_data *data)
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

void	radix_sub(t_data *data, int i)
{
	if (((data->stack_a[data->a_len - 1] >> i) & 1) == 0)
		push_b(data);
	else
		rotate_a(data);
}

void	radix_sort(t_data *data)
{
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	max_bits = max_bit(data);
	while (i <= max_bits)
	{
		size = data->a_len;
		j = 0;
		while (j < size)
		{
			if (check_sorted_rdx(data) == 0)
				radix_sub(data, i);
			j++;
		}
		while (data->b_len)
			push_a(data);
		i++;
	}
}
