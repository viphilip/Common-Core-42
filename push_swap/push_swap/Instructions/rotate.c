/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:26:34 by viphilip          #+#    #+#             */
/*   Updated: 2024/01/24 14:08:45 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_stack **x, char stack)
{
	t_stack	*tmp;
	t_stack	*top;

	if (!*x || !(*x)->next)
		return ;
	tmp = *x;
	*x = (*x)->next;
	top = *x;
	while (*x && (*x)->next)
		*x = (*x)->next;
	(*x)->next = tmp;
	*x = (*x)->next;
	(*x)->next = NULL;
	*x = top;
	if (stack == 'a' || stack == 'b')
		ft_printf("r%c\n", stack);
}

void	rev_rotate(t_stack **x, char stack)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*x || !(*x)->next)
		return ;
	tmp = *x;
	while (*x && (*x)->next)
		*x = (*x)->next;
	last = (*x)->back;
	(*x)->next = tmp;
	(*x)->back = NULL;
	last->next = NULL;
	if (stack == 'a' || stack == 'b')
		ft_printf("rr%c\n", stack);
}

void	rotate_all(t_stack **a, t_stack **b)
{
	rotate(a, 'x');
	rotate(b, 'x');
	ft_printf("rr\n");
}

void	rev_rotate_all(t_stack **a, t_stack **b)
{
	rev_rotate(a, 'x');
	rev_rotate(b, 'x');
	ft_printf("rrr\n");
}
