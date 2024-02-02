/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:36:26 by viphilip          #+#    #+#             */
/*   Updated: 2024/01/24 14:10:22 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	fill_stack_a(char **nbr, t_stack **a)
{
	size_t	i;
	t_stack	*buffer;
	t_stack	*tmp;

	i = 0;
	while (nbr[i])
	{
		if (!(*a))
		{
			*a = lstnew(atol(nbr[i]));
			tmp = *a;
		}
		else
		{
			buffer = *a;
			(*a)->next = lstnew(atol(nbr[i]));
			*a = (*a)->next;
			(*a)->back = buffer;
		}
		i++;
	}
	*a = tmp;
}
