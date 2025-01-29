/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 01:33:25 by rorollin          #+#    #+#             */
/*   Updated: 2024/11/29 02:38:22 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_next;

	if (lst == NULL)
		return ;
	while (*lst != NULL)
	{
		lst_next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = lst_next;
	}
	*lst = NULL;
}
