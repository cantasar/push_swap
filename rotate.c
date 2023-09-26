/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:40:47 by ctasar            #+#    #+#             */
/*   Updated: 2023/09/20 00:43:38 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_data	*index)
{
	int	temp;
	int	i;

	i = index->a_len - 1;
	while (i > 1)
	{
		temp = index->stack_a[i];
		index->stack_a[i] = index->stack_a[i - 1];
		index->stack_a[i - 1] = temp;
	}
	write(1, "ra\n", 3);
}

void	rotate_b(t_data	*index)
{
	int	temp;
	int	i;

	i = index->b_len - 1;
	while (i > 1)
	{
		temp = index->stack_b[i];
		index->stack_b[i] = index->stack_b[i - 1];
		index->stack_b[i - 1] = temp;
	}
	write(1, "rb\n", 3);
}

void	rotate_r(t_data	*index)
{
	int	temp;
	int	i;

	i = index->a_len - 1;
	while (i > 1)
	{
		temp = index->stack_a[i];
		index->stack_a[i] = index->stack_a[i - 1];
		index->stack_a[i - 1] = temp;
	}
	i = index->b_len - 1;
	while (i > 1)
	{
		temp = index->stack_b[i];
		index->stack_b[i] = index->stack_b[i - 1];
		index->stack_b[i - 1] = temp;
	}
	write(1, "rr\n", 3);
}
