/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes_finder.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:49:11 by viphilip          #+#    #+#             */
/*   Updated: 2024/02/13 15:41:02 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*find_smallest(t_stack *x)
{
	t_stack	*smallest;

	if (!x)
		return (NULL);
	smallest = x;
	while (x && x->next)
	{
		x = x->next;
		if (x->nbr < smallest->nbr)
			smallest = x;
	}
	return (smallest);
}

t_stack	*find_highest(t_stack *x)
{
	t_stack	*highest;

	if (!x)
		return (NULL);
	highest = x;
	while (x && x->next)
	{
		x = x->next;
		if (x->nbr > highest->nbr)
			highest = x;
	}
	return (highest);
}

t_stack	*find_cheapest(t_stack *x)
{
	t_stack	*node;

	if (!x)
		return (NULL);
	node = x;
	while (!node->cheapest)
		node = node->next;
	return (node);
}

t_stack	*find_last_node(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack && stack->next)
		stack = stack->next;
	return (stack);
}
