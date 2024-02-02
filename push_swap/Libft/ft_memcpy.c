/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:25:22 by viphilip          #+#    #+#             */
/*   Updated: 2023/11/20 09:23:52 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = dest;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		*tmp = *(const unsigned char *)src;
		tmp++;
		src++;
		i++;
	}
	return (dest);
}
