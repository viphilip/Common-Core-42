/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:43:49 by viphilip          #+#    #+#             */
/*   Updated: 2023/11/25 11:44:02 by viphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new_lst;
	void	*new_content;

	new_lst = NULL;
	new_head = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new_content = (*f)(lst->content);
		new_lst = NULL;
		if (new_content)
			new_lst = ft_lstnew(new_content);
		if (!new_lst)
		{
			del(new_content);
			ft_lstclear(&new_head, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new_head, new_lst);
		lst = lst->next;
	}
	return (new_head);
}
