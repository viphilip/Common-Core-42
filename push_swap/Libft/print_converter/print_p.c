/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:36:32 by viphilip          #+#    #+#             */
/*   Updated: 2024/01/02 11:02:52 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	convert_p(unsigned long pt, int cnt)
{
	char const	*hexbase;
	int			count;
	int			tmp;

	tmp = cnt;
	cnt = 0;
	count = 0;
	hexbase = "0123456789abcdef";
	if (pt >= 16)
		count += convert_p(pt / 16, cnt);
	count += print_c(hexbase[pt % 16]);
	return (count + tmp);
}

int	print_p(unsigned long pt)
{
	int	count;

	count = 0;
	if (!pt)
		return (print_s("(nil)"));
	count += print_s("0x");
	return (convert_p(pt, count));
}
