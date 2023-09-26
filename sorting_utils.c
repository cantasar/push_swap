/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:21:00 by ctasar            #+#    #+#             */
/*   Updated: 2023/09/20 00:36:50 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_first(t_data	*data)
{
	int	i;

	i = 1;
	while (i)
	{
		if (data->a_len == 5 && data->b_len == 0)
		{
			if (data->stack_a[data->a_len - i] == 0)
				return (i);
		}
		if (data->a_len == 4 && data->b_len == 1)
		{
			if (data->stack_a[data->a_len - i] == 1)
				return (i);
		}
		if (data->a_len == 4 && data->b_len == 0)
		{
			if (data->stack_a[data->a_len - i] == 0)
				return (i);
		}
		i++;
	}
	return (0);
}

void	four_sort(t_data *data)
{
	push_b(data);
	three_sort(data);
	push_a(data);
}