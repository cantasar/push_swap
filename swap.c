/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:19:42 by ctasar            #+#    #+#             */
/*   Updated: 2023/09/19 19:20:00 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	swap_a(t_data	*data)
{
	int	temp;

	if (data->a_len < 2)
		return ;
	temp = data->stack_a[data->a_len - 1];
	data->stack_a[data->a_len - 1] = data->stack_a[data->a_len - 2];
	data->stack_a[data->a_len - 2] = temp;
	write(1, "sa\n", 3);
}

void	swap_b(t_data	*data)
{
	int	temp;

	if (data->b_len < 2)
		return ;
	temp = data->stack_b[data->b_len - 1];
	data->stack_b[data->b_len - 1] = data->stack_b[data->b_len - 2];
	data->stack_b[data->b_len - 2] = temp;
	write(1, "sb\n", 3);
}

void	swap_ss(t_data	*data)
{
	int	temp;

	if (data->a_len < 2 || data->b_len < 2)
		return ;
	temp = data->stack_a[data->a_len - 1];
	data->stack_a[data->a_len - 1] = data->stack_a[data->a_len - 2];
	data->stack_a[data->a_len - 2] = temp;
	temp = data->stack_b[data->b_len - 1];
	data->stack_b[data->b_len - 1] = data->stack_b[data->b_len - 2];
	data->stack_b[data->b_len - 2] = temp;
	write(1, "ss\n", 3);
}
