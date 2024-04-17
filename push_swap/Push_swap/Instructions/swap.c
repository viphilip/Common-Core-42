/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:25:13 by viphilip          #+#    #+#             */
/*   Updated: 2024/01/24 14:08:13 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_stack **x, char stack)
{
	t_stack	*tmp;

	if (!*x || !(*x)->next)
		return ;
	tmp = *x;
	*x = (*x)->next;
	tmp->next = (*x)->next;
	(*x)->back = NULL;
	(*x)->next = tmp;
	if (stack == 'a' || stack == 'b')
		ft_printf("s%c\n", stack);
}

void	swap_all(t_stack **a, t_stack **b)
{
	swap(a, 'x');
	swap(b, 'x');
	ft_printf("ss\n");
}
