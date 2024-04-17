/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:56:56 by viphilip          #+#    #+#             */
/*   Updated: 2024/02/10 14:57:17 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_error(char **nbr)
{
	int	i;

	i = 0;
	while (nbr[i])
	{
		if (check_digit(nbr[i]))
			return (1);
		else if (check_max(nbr[i]))
			return (1);
		i++;
	}
	if (check_double(nbr))
		return (1);
	return (0);
}
