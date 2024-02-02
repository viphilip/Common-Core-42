/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:18:55 by viphilip          #+#    #+#             */
/*   Updated: 2024/02/01 16:55:49 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


//Mettre un flag pour determiner quel cheapest pull au top ?
void	cheapest_on_top(t_stack **a, t_stack **b)
{

	while (!(*a)->cheapest)// && !(*b)->cheapest)
		*a = (*a)->next;


	// ft_printf("(*a)->nbr [%d]\n", (*a)->nbr);
	// ft_printf("(*a)->target_node->nbr [%d]\n", (*a)->target_node->nbr);
	// ft_printf("(*a)->target_node->back [%d]\n", (*a)->target_node->back);
	// ft_printf("(*a)->target_node->back [%d]\n", (*a)->target_node->back->nbr);

	// if (!(*a)->target_node->back->back)
	// 	ft_printf("pas ok\n");
	// else if ((*a)->target_node->back->back)
	// 	ft_printf("ok\n");

	//ft_printf("(*a)->back->nbr\n",(*a)->back->nbr);
	if ((*a)->target_node->back->nbr)
		ft_printf("okkkkkkkkk(*a)->back->nbr[%d]\n",(*a)->target_node->back->nbr);
	if (!(*a)->back && (*a)->target_node->back->nbr)
		ft_printf("ok\n");

	while ((*a)->back && (*a)->target_node->back->nbr)
	{
		ft_printf("testZZZZZZZZZZ\n");
		if ((*a)->back->above_median && (*a)->target_node->above_median)
		{
			while ((*a)->back != NULL || !(*a)->target_node->back)
				rotate_all(a, b);
		}
		else if (!(*a)->back->above_median && !(*a)->target_node->above_median)
		{
			while ((*a)->back != NULL || !(*a)->target_node->back)
				rev_rotate_all(a, b);
		}
		if ((*a)->back && (*a)->above_median)
		{
			while ((*a)->back)
				rotate(a, 'a');
		} 
		if ((*a)->back && !(*a)->above_median)
		{
			while ((*a)->back)
				rev_rotate(a, 'a');
		}
		if ((*a)->target_node->back->nbr && (*a)->target_node->above_median)
		{
			while ((*a)->target_node->back->nbr)
				rotate(b, 'b');
		} 
		if ((*a)->target_node->back->nbr && !(*a)->target_node->above_median)
		{
			while ((*a)->target_node->back->nbr)
				rev_rotate(b, 'b');
		}
	}
}

void	push_swap(t_stack **a, t_stack **b)
{
	push(a, b, 'b');
	push(a, b, 'b');
	// while (stack_len(*a) > 3)
	// {
		stack_init(*a, *b);
		cheapest_on_top(a, b);
	// }
	
	

}

void	sort(t_stack **a, t_stack **b)
{
	if (is_sorted(*a))
	 	return ;
	if (stack_len(*a) == 3)
		sort_three(a);
	if (stack_len(*a) > 4)
		push_swap(a, b);
}
