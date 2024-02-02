/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_highest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:59:06 by viphilip          #+#    #+#             */
/*   Updated: 2024/01/31 16:22:22 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
