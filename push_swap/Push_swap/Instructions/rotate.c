/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:26:34 by viphilip          #+#    #+#             */
/*   Updated: 2024/02/13 15:40:23 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_stack **x, char stack)
{
	t_stack	*top;
	t_stack	*last;

	if (!*x || !(*x)->next)
		return ;
	top = *x;
	*x = (*x)->next;
	(*x)->back = NULL;
	last = find_last_node(*x);
	last->next = top;
	top->back = last;
	top->next = NULL;
	if (stack == 'a' || stack == 'b')
		ft_printf("r%c\n", stack);
}

void	rev_rotate(t_stack **x, char stack)
{
	t_stack	*top;
	t_stack	*last;

	if (!*x || !(*x)->next)
		return ;
	top = *x;
	last = find_last_node(*x);
	last->back->next = NULL;
	last->back = NULL;
	last->next = top;
	top->back = last;
	*x = last;
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
