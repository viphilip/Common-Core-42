/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 10:04:57 by viphilip          #+#    #+#             */
/*   Updated: 2024/02/29 15:51:44 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	char	**nbr;
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		return (1);
	if (ac == 2)
		nbr = ft_split(av[1], ' ');
	if (ac > 2)
		nbr = av + 1;
	if (check_error(nbr))
	{
		if (ac == 2)
			free_matrix(nbr);
		return (write(2, "Error\n", 6), 0);
	}
	fill_stack_a(nbr, &a);
	if (ac == 2)
		free_matrix(nbr);
	sort(&a, &b);
	free_stack(&a);
	return (0);
}
