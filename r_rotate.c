/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:40:17 by ctasar            #+#    #+#             */
/*   Updated: 2023/10/02 21:50:35 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_data *index)
{
	int	temp;
	int	i;

	i = 0;
	while (i < index->a_len -1)
	{
		temp = index->stack_a[i + 1];
		index->stack_a[i + 1] = index->stack_a[i];
		index->stack_a[i] = temp;
		++i;
	}
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_data *index)
{
	int	temp;
	int	i;

	i = 0;
	while (i < index->b_len -1)
	{
		temp = index->stack_b[i + 1];
		index->stack_b[i + 1] = index->stack_b[i];
		index->stack_b[i] = temp;
		++i;
	}
	write(1, "rrb\n", 4);
}

void	reverse_rotate_r(t_data *index)
{
	int	temp;
	int	i;

	i = 0;
	while (i < index->a_len -1)
	{
		temp = index->stack_a[i + 1];
		index->stack_a[i + 1] = index->stack_a[i];
		index->stack_a[i] = temp;
		++i;
	}
	i = 0;
	while (i < index->b_len -1)
	{
		temp = index->stack_b[i + 1];
		index->stack_b[i + 1] = index->stack_b[i];
		index->stack_b[i] = temp;
		++i;
	}
	write(1, "rrr\n", 4);
}
