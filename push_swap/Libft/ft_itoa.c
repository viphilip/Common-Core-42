/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:06:02 by viphilip          #+#    #+#             */
/*   Updated: 2023/11/21 13:22:28 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_size(long int n)
{
	size_t	count;

	count = 1;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 9)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t		i;
	size_t		size;
	char		*nb;
	long int	num;

	i = 0;
	num = n;
	size = count_size(num);
	nb = malloc(sizeof(char) * size + 1);
	if (!nb)
		return (NULL);
	if (num < 0)
	{
		num *= -1;
		nb[0] = '-';
		i++;
	}
	nb[size] = '\0';
	while (i < size)
	{
		size--;
		nb[size] = num % 10 + '0';
		num /= 10;
	}
	return (nb);
}
