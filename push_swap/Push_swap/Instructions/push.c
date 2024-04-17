/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:15:39 by viphilip          #+#    #+#             */
/*   Updated: 2024/01/24 14:08:05 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_stack **src, t_stack **dst, char stack)
{
	t_stack	*node;

	if (!(*src))
		return ;
	node = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->back = NULL;
	node->next = *dst;
	if (*dst)
		(*dst)->back = node;
	*dst = node;
	if (stack == 'a' || stack == 'b')
		ft_printf("p%c\n", stack);
}
