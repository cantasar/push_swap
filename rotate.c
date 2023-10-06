/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:40:47 by ctasar            #+#    #+#             */
/*   Updated: 2023/10/04 19:20:26 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_data	*data)
{
	int	temp;
	int	i;

	i = data->a_len - 1;
	while (i >= 1)
	{
		temp = data->stack_a[i];
		data->stack_a[i] = data->stack_a[i - 1];
		data->stack_a[i - 1] = temp;
		i--;
	}
	write(1, "ra\n", 3);
}

void	rotate_b(t_data	*data)
{
	int	temp;
	int	i;

	i = data->b_len - 1;
	while (i >= 1)
	{
		temp = data->stack_b[i];
		data->stack_b[i] = data->stack_b[i - 1];
		data->stack_b[i - 1] = temp;
		i--;
	}
	write(1, "rb\n", 3);
}

void	rotate_r(t_data	*data)
{
	int	temp;
	int	i;

	i = data->a_len - 1;
	while (i >= 1)
	{
		temp = data->stack_a[i];
		data->stack_a[i] = data->stack_a[i - 1];
		data->stack_a[i - 1] = temp;
		i--;
	}
	i = data->b_len - 1;
	while (i >= 1)
	{
		temp = data->stack_b[i];
		data->stack_b[i] = data->stack_b[i - 1];
		data->stack_b[i - 1] = temp;
		i--;
	}
	write(1, "rr\n", 3);
}
