/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 20:02:23 by ctasar            #+#    #+#             */
/*   Updated: 2023/10/04 20:04:40 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_index(t_data *data, int index)
{
	int	i;

	i = data->a_len - 1;
	while (i >= 0)
	{
		if (data->stack_a[i] == index)
			break ;
		i--;
	}
	return (i);
}
