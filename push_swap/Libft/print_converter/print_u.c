/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:49:22 by viphilip          #+#    #+#             */
/*   Updated: 2024/01/02 11:03:04 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	print_u(unsigned int nb)
{
	long long	tmp;

	tmp = nb;
	if (nb > 9)
	{
		print_u(nb / 10);
		print_u(nb % 10);
	}
	else
		print_c(nb + '0');
	return (count_nb(tmp));
}
