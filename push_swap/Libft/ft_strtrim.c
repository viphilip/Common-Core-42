/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:00:08 by viphilip          #+#    #+#             */
/*   Updated: 2023/11/23 12:44:35 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_set(const char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static	size_t	get_start(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (is_set(s1[start], set) == 1)
		start++;
	return (start);
}

static	size_t	get_end(char const *s1, char const *set)
{
	size_t	end;

	end = ft_strlen(s1) - 1;
	while (is_set(s1[end], set) == 1)
		end--;
	return (end + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*new_s;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	start = get_start(s1, set);
	end = get_end(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	new_s = malloc(sizeof(char) * (end - start) + 1);
	if (!new_s)
		return (NULL);
	while (start != end)
	{
		new_s[i] = s1[start];
		start++;
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
