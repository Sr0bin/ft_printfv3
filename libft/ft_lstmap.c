/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 02:08:44 by rorollin          #+#    #+#             */
/*   Updated: 2024/11/29 03:09:53 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*temp_node;
	void	*content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		temp_node = ft_lstnew(content);
		if (temp_node == NULL)
		{
			del(content);
			ft_lstclear(&new_list, del);
			new_list = NULL;
			return (NULL);
		}
		ft_lstadd_back(&new_list, temp_node);
		lst = lst->next;
	}
	return (new_list);
}
