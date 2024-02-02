/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 10:04:57 by viphilip          #+#    #+#             */
/*   Updated: 2024/02/01 15:57:22 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>

void	print_dlist(t_stack *lst)
{
	while (lst)
	{
		ft_printf("[%d]MED:%s INDX: %d TRGT:%d CHEAP:%s COST: %d\n" , lst->nbr,
															lst->above_median?"true":"false",
															lst->index,
															lst->target_node->nbr,
															lst->cheapest?"true":"false",
															lst->push_cost);
		lst = lst->next;
	}
}
void	print_blist(t_stack *lst)
{
	while (lst)
	{
		ft_printf("[%d]MED:%s INDX: %d COST: %d\n", lst->nbr,
													lst->above_median?"true":"false",
													lst->index,
													lst->push_cost);
		lst = lst->next;
	}
}

int	main(int ac, char **av)
{
	char 	**nbr;
	t_stack *a;
	t_stack *b;

	a = NULL;
	b = NULL;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		return (1);
	if (ac == 2)
		nbr = ft_split(av[1], ' ');
	if (ac > 2)
		nbr = av + 1;
	if (check_error(nbr))
		return (write(2, "Error\n", 6), 0);
	fill_stack_a(nbr, &a);


	// printf("\n-----BEFORE SORT-----\n");
	//print_dlist(a);
	// printf("----------------------\n");

	sort(&a, &b);

	printf("\n-----AFTER SORT-----\n");
	print_dlist(a);
	printf("\n-----B-----\n");
	print_dlist(b);
	printf("--------------------\n");

	return (0);
}
