/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:20:18 by viphilip          #+#    #+#             */
/*   Updated: 2023/11/21 13:24:51 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	clean_array(char **strs, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

static size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	*take_word(char const *s, int start, int end)
{
	size_t		i;
	char		*word;

	i = 0;
	word = (char *)ft_calloc(sizeof(char), ((end - start) + 1));
	if (!word)
		return ((void *)0);
	while (start != end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;
	char	**strs;

	i = 0;
	j = 0;
	strs = (char **)ft_calloc(sizeof(char *), (count_word(s, c) + 1));
	if (!strs)
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		start = i;
		while (s[i] != c && s[i])
			i++;
		strs[j] = take_word(s, start, i);
		if (!strs[j])
			return (clean_array(strs, j), NULL);
		j++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (strs);
}
