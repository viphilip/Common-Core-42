/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:11:15 by viphilip          #+#    #+#             */
/*   Updated: 2023/11/20 08:58:08 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src;

	tmp_dst = dest;
	tmp_src = src;
	if (dest > src)
	{
		while (n--)
			tmp_dst[n] = tmp_src[n];
		return (dest);
	}
	return (tmp_dst = ft_memcpy(dest, src, n), dest);
}
