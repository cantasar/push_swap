/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:15:42 by ctasar            #+#    #+#             */
/*   Updated: 2023/10/06 18:54:59 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**get_args(int argc, char **argv)
{
	char	**all_args;
	int		i;
	int		j;

	all_args = NULL;
	if (argc == 2)
	{
		all_args = ft_split(argv[1], ' ');
		return (all_args);
	}
	else
	{
		all_args = (char **)malloc(sizeof(char **) * argc);
		all_args[argc] = NULL;
		i = 1;
		j = 0;
		while (argv[i])
		{
			all_args[j] = argv[i];
			j++;
			i++;
		}
	}
	return (all_args);
}

void	set_stack_a(char **all_args, t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (all_args[j])
		j++;
	j--;
	while (all_args[i])
	{
		data->stack_a[i] = ft_atoi(all_args[j]);
		i++;
		j--;
	}
}

t_data	*init(char **all_args)
{
	int		len;
	t_data	*data;

	len = 0;
	while (all_args[len])
		len++;
	data = ft_calloc(1, sizeof(t_data));
	data->a_len = len;
	data->stack_a = malloc(sizeof(int) * len + 1);
	data->stack_b = malloc(sizeof(int) * len + 1);
	data->sorted = malloc(sizeof(int) * len + 1);
	data->sorted_inx = malloc(sizeof(int) * len + 1);
	set_stack_a(all_args, data);
	return (data);
}

int	main(int argc, char **argv)
{
	char	**all_args;
	t_data	*data;

	if (argc < 2)
		return (0);
	check_nums(argc, argv);
	all_args = get_args(argc, argv);
	data = init(all_args);
	check_sorted(data);
	sorted_min(data);
	index_list(data);
	if (argc <= 6)
		sorting(data);
	else
		radix_sort(data);
	// int i = 0;
	// while (i < data->a_len)
	// {
	// 	printf("%d\n", data->stack_a[i]);
	// 	i++;
	// }
	
	exit_swap(data);
	// system("leaks push_swap");
	return (0);
}
