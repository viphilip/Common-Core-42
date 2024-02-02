/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:00:59 by viphilip          #+#    #+#             */
/*   Updated: 2024/01/25 16:46:42 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted(t_stack *x)
{
	t_stack	*tmp;

	while (x && x->next)
	{
		tmp = x->next;
		if (x->nbr > tmp->nbr)
			return (0);
		x = x->next;
	}
	return (1);
}
