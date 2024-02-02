/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smallest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:49:11 by viphilip          #+#    #+#             */
/*   Updated: 2024/01/26 14:50:25 by viphilip         ###   ########.fr       */
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
