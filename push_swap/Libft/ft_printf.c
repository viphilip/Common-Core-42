/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:49:44 by viphilip          #+#    #+#             */
/*   Updated: 2024/01/02 11:07:36 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	ap;

	i = 0;
	count = 0;
	if (!str)
		return (-1);
	va_start(ap, str);
	while (str[i])
	{
		while (str[i] == '%' && is_flag(str[i + 1]))
		{
			count += convert_check(str, i, ap);
			i += 2;
		}
		if (str[i] == '\0')
			break ;
		else if (str[i] == '%' && !is_flag(str[i + 1]))
			return (va_end(ap), -1);
		count += print_c(str[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
