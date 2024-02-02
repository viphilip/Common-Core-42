/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:02:39 by viphilip          #+#    #+#             */
/*   Updated: 2024/02/01 15:12:46 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*sort_three(t_stack **a)
{
	t_stack	*highest_nbr;

	highest_nbr = find_highest(*a);
	if (*a == highest_nbr)
		rotate(a, 'a');
	else if ((*a)->next == highest_nbr)
		rev_rotate(a, 'a');
	if ((*a)->nbr > (*a)->next->nbr)
		swap(a, 'a');
	return (*a);
}
