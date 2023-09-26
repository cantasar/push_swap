/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:11:22 by ctasar            #+#    #+#             */
/*   Updated: 2023/09/20 00:34:12 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>

# include "Libft/libft.h"

typedef struct s_data
{
	int	*stack_a;
	int	*stack_b;
	int	*sorted;
	int	*sorted_inx;
	int	a_len;
	int	b_len;
}	t_data;

//utils
void	error(void);
int		num_control(char *num);
int		dup_control(int nb, char **argv, int i);
long	ft_atol(const char *str);
void	exit_swap(t_data	*data);

//controls
void	check_nums(int argc, char **argv);
void	check_sorted(t_data *data);

//sorted list
void	sorted_min(t_data *data);
void	index_list(t_data *data);

//sorting
void	sorting(t_data *data);

void	push_b(t_data *index);
void	push_a(t_data *index);
void	swap_a(t_data	*index);
void	swap_b(t_data	*index);
void	swap_ss(t_data	*index);

//sorting utils
int		find_first(t_data	*data);
void	four_sort(t_data *data);

#endif