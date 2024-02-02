/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:03:01 by viphilip          #+#    #+#             */
/*   Updated: 2023/11/20 11:54:08 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i;

	i = 0;
	if (start + len > ft_strlen(s))
	{
		if (start > ft_strlen(s))
			len = 0;
		else
			len = ft_strlen(s) - start;
	}
	new_s = malloc(sizeof(char) * len + 1);
	if (!new_s)
		return ((void *)0);
	while (i < len && s[start])
	{
		new_s[i] = s[start];
		start++;
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
