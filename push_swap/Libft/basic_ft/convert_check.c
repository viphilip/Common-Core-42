/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:56:46 by viphilip          #+#    #+#             */
/*   Updated: 2024/01/02 11:03:22 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h" 

int	convert_check(char const *str, int i, va_list ap)
{
	i++;
	if (str[i] == 'c')
		return (print_c(va_arg(ap, int)));
	else if (str[i] == 's')
		return (print_s(va_arg(ap, char *)));
	else if (str[i] == 'p')
		return (print_p(va_arg(ap, unsigned long)));
	else if (str[i] == 'd' || str[i] == 'i')
		return (print_d_i(va_arg(ap, int)));
	else if (str[i] == 'u')
		return (print_u(va_arg(ap, unsigned int)));
	else if (str[i] == 'x')
		return (print_x(va_arg(ap, int)));
	else if (str[i] == 'X')
		return (print_xu(va_arg(ap, int)));
	else if (str[i] == '%')
		return (print_c('%'));
	return (0);
}
