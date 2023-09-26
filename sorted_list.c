/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:48:12 by ctasar            #+#    #+#             */
/*   Updated: 2023/09/18 20:28:47 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorted_min(t_data *data)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < data->a_len)
	{
		data->sorted[i] = data->stack_a[i];
		i++;
	}
	i = 0;
	while (i < data->a_len - 1)
	{
		if (data->sorted[i] > data->sorted[i + 1])
		{
			tmp = data->sorted[i];
			data->sorted[i] = data->sorted[i + 1];
			data->sorted[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
}

void	index_list(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < data->a_len)
	{
		j = 0;
		while (j < data->a_len)
		{
			if (data->stack_a[i] == data->sorted[j])
				data->sorted_inx[i] = j;
			j++;
		}
		i++;
	}
	i = 0;
	while (i < data->a_len)
	{
		data->stack_a[i] = data->sorted_inx[i];
		i++;
	}
}
