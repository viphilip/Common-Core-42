/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:50:21 by viphilip          #+#    #+#             */
/*   Updated: 2024/02/01 15:12:54 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_init(t_stack *a, t_stack *b)
{
	init_index(a, b);
	init_median(a, b);
	init_cost(a);
	init_cost(b);
	init_target(a, b);
	init_cheapest(a);
	init_cheapest(b);
}
