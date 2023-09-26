/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:21:12 by ctasar            #+#    #+#             */
/*   Updated: 2023/09/19 19:21:39 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_data *data)
{
	if (data->a_len <= 0)
	{
		exit(1);
	}
	data->b_len++;
	data->stack_b[data->b_len - 1] = data->stack_a[data->a_len - 1];
	data->stack_a[data->a_len - 1] = 0;
	data->a_len--;
	write(1, "pb\n", 3);
}

void	push_a(t_data *data)
{
	if (data->b_len <= 0)
	{
		exit(1);
	}
	data->a_len++;
	data->stack_a[data->a_len - 1] = data->stack_b[data->b_len - 1];
	data->stack_b[data->b_len - 1] = 0;
	data->b_len--;
	write(1, "pa\n", 3);
}
