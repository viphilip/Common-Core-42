/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:50:21 by viphilip          #+#    #+#             */
/*   Updated: 2024/02/13 15:42:11 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	init_target_b(t_stack *a, t_stack *b)
{
	long	closest_smaller;
	t_stack	*top;
	t_stack	*target;

	top = a;
	while (b)
	{
		a = top;
		closest_smaller = LONG_MAX;
		while (a)
		{
			if (a->nbr > b->nbr && a->nbr < closest_smaller)
			{
				target = a;
				closest_smaller = a->nbr;
			}
			a = a->next;
		}
		if (closest_smaller == LONG_MAX)
			b->target_node = find_smallest(top);
		else
			b->target_node = target;
		b = b->next;
	}
}

void	stack_init(t_stack *a, t_stack *b, char flag)
{
	init_index(a, b);
	init_median(a, b);
	init_cost(a);
	init_cost(b);
	if (flag == 'a')
	{
		init_target(a, b);
		init_cheapest(a);
	}
	if (flag == 'b')
	{
		init_target_b(a, b);
		init_cheapest(b);
	}
}
