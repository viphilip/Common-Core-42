/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:49:55 by viphilip          #+#    #+#             */
/*   Updated: 2024/01/02 11:02:44 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	print_d_i(int nb)
{
	int	tmp;

	tmp = nb;
	if (nb == -2147483648)
	{
		print_d_i(nb / 10);
		print_c('8');
	}
	else if (nb < 0)
	{
		print_c('-');
		print_d_i(-nb);
	}
	else if (nb > 9)
	{
		print_d_i(nb / 10);
		print_d_i(nb % 10);
	}
	else
		print_c(nb + '0');
	return (count_nb(tmp));
}
