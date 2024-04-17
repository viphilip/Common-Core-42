/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:18:55 by viphilip          #+#    #+#             */
/*   Updated: 2024/02/29 15:53:26 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	cheapest_on_top(t_stack **a, t_stack **b)
{
	t_stack	*node;

	node = find_cheapest(*a);
	if (node->back || node->target_node->back)
	{
		if (node->back && node->above_median && node->target_node->above_median)
			while (node->back && node->target_node->back)
				rotate_all(a, b);
		if (node->back && !node->above_median
			&& !node->target_node->above_median)
			while (node->back && node->target_node->back)
				rev_rotate_all(a, b);
		if (node->back && node->above_median)
			while (node && node->back)
				rotate(a, 'a');
		if (node->back && !node->above_median)
			while (node->back)
				rev_rotate(a, 'a');
		if (node->target_node->back && node->target_node->above_median)
			while (node->target_node->back)
				rotate(b, 'b');
		if (node->target_node->back && !node->target_node->above_median)
			while (node->target_node->back)
				rev_rotate(b, 'b');
	}
}

static void	pull_smallest_on_top(t_stack **stack, char flag)
{
	t_stack	*smallest;

	smallest = find_smallest(*stack);
	if (!*stack || !stack)
		return ;
	while (smallest->back)
	{
		if (smallest->above_median)
			rotate(stack, flag);
		if (!smallest->above_median)
			rev_rotate(stack, flag);
	}
}

static void	pull_target_on_top(t_stack **a, t_stack **b)
{
	if ((*b)->target_node->back)
	{
		if ((*b)->target_node->above_median)
			while ((*b)->target_node->back)
				rotate(a, 'a');
		if (!(*b)->target_node->above_median)
			while ((*b)->target_node->back)
				rev_rotate(a, 'a');
	}
}

static void	push_swap(t_stack **a, t_stack **b)
{
	push(a, b, 'b');
	push(a, b, 'b');
	while (stack_len(*a) > 2)
	{
		stack_init(*a, *b, 'a');
		cheapest_on_top(a, b);
		push(a, b, 'b');
	}
	while (stack_len(*b) > 0)
	{
		stack_init(*a, *b, 'b');
		pull_target_on_top(a, b);
		push(b, a, 'a');
	}
	if (find_smallest(*a)->back)
		pull_smallest_on_top(a, 'a');
}

void	sort(t_stack **a, t_stack **b)
{
	if (is_sorted(*a))
		return ;
	if (stack_len(*a) == 2)
		swap(a, 'a');
	if (stack_len(*a) == 3)
		sort_three(a);
	if (stack_len(*a) > 3)
		push_swap(a, b);
}
