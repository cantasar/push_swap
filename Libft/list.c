/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:04:58 by ctasar            #+#    #+#             */
/*   Updated: 2023/09/14 14:03:50 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int value)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
	{
		return (NULL);
	}
	lst->value = value;
	lst->index = -1;
	lst->next = 0;
	return (lst);
}

void	ft_lstadd_front(t_list **stack, t_list *new)
{
	new->next = *stack;
	*stack = new;
}

t_list	*ft_lstlast(t_list *head)
{
	if (!head)
		return (0);
	while (head->next != 0)
		head = head->next;
	return (head);
}

void	ft_lstadd_back(t_list **stack, t_list *new)
{
	printf("1girdi\n");
	if (!stack || !new)
		return ;
	if (!*stack)
	{
		*stack = new;
		printf("%d\n", (*stack)->value);
		return ;
	}
	ft_lstlast(*stack)->next = new;
	printf("%d\n", new->value);
	ft_lstlast(*stack)->next = NULL;
}

int	ft_lstsize(t_list *head)
{
	size_t	i;
	t_list	*tmp;

	tmp = head;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
