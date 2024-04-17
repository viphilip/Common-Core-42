/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:25:03 by viphilip          #+#    #+#             */
/*   Updated: 2024/02/14 09:30:29 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_index(t_stack *a, t_stack *b)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (a)
	{
		a->index = i;
		a = a->next;
		i++;
	}
	while (b)
	{
		b->index = j;
		b = b->next;
		j++;
	}
}

void	init_median(t_stack *a, t_stack *b)
{
	int	size;

	size = stack_len(a) / 2;
	while (a)
	{
		if (a->index < size)
			a->above_median = true;
		else
			a->above_median = false;
		a = a->next;
	}
	size = stack_len(b) / 2;
	while (b)
	{
		if (b->index < size)
			b->above_median = true;
		else
			b->above_median = false;
		b = b->next;
	}
}

void	init_target(t_stack *a, t_stack *b)
{
	long	closest_smaller;
	t_stack	*top;
	t_stack	*target;

	top = b;
	while (a)
	{
		b = top;
		closest_smaller = LONG_MIN;
		while (b)
		{
			if (b->nbr < a->nbr && b->nbr > closest_smaller)
			{
				target = b;
				closest_smaller = b->nbr;
			}
			b = b->next;
		}
		if (closest_smaller == LONG_MIN)
			a->target_node = find_highest(top);
		else
			a->target_node = target;
		a->target_node->target_node = a;
		a = a->next;
	}
}

void	init_cost(t_stack *stack)
{
	int	cost;

	cost = 0;
	while (stack && stack->above_median)
	{
		stack->push_cost = cost;
		stack = stack->next;
		cost++;
	}
	cost = 1;
	stack = find_last_node(stack);
	while (stack && stack->above_median == false)
	{
		stack->push_cost = cost;
		stack = stack->back;
		cost++;
	}
}

void	init_cheapest(t_stack *x)
{
	size_t	best_cost;
	size_t	cost;
	t_stack	*node;

	node = NULL;
	best_cost = LONG_MAX;
	cost = 0;
	while (x)
	{
		cost = x->push_cost + x->target_node->push_cost;
		if (cost < best_cost)
		{
			best_cost = cost;
			node = x;
		}
		x = x->next;
	}
	node->cheapest = true;
}
