/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 12:44:08 by viphilip          #+#    #+#             */
/*   Updated: 2023/11/21 13:25:48 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	new_s = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!new_s)
		return ((char *)0);
	while (s1[i])
	{
		new_s[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		new_s[j] = s2[i];
		i++;
		j++;
	}
	new_s[j] = '\0';
	return (new_s);
}
