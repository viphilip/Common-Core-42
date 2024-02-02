/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_last_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:33:03 by viphilip          #+#    #+#             */
/*   Updated: 2024/01/31 11:35:03 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*get_last_node(t_stack *stack)
{
	while (stack && stack->next)
		stack = stack->next;
	return (stack);
}
