/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:07:09 by viphilip          #+#    #+#             */
/*   Updated: 2024/01/24 14:10:08 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_double(char **nbr)
{
	int	i;
	int	j;

	i = 1;
	while (nbr[i])
	{
		j = i - 1;
		while (j >= 0)
		{
			if (ft_atol(nbr[i]) == ft_atol(nbr[j]))
				return (1);
			j--;
		}
		i++;
	}
	return (0);
}

int	check_digit(char *nbr)
{
	int	i;

	i = 0;
	if (!((nbr[i] >= '0' && nbr[i] <= '9') || nbr[i] == '-' || nbr[i] == '+'))
		return (1);
	if (nbr[i] == '-' || nbr[i] == '+')
		i++;
	while (nbr[i])
	{
		if (!(nbr[i] >= '0' && nbr[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

int	check_max(char *nbr)
{
	if (ft_atol(nbr) > INT_MAX || ft_atol(nbr) < INT_MIN)
		return (1);
	return (0);
}

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
