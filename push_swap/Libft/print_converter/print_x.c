/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:06:45 by viphilip          #+#    #+#             */
/*   Updated: 2024/01/02 11:03:09 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	print_x(int nb)
{
	int			count;
	char const	*hexbase;

	count = 0;
	hexbase = "0123456789abcdef";
	if ((unsigned int)nb >= 16)
		count += print_x((unsigned int)nb / 16);
	count += print_c(hexbase[(unsigned int)nb % 16]);
	return (count);
}
