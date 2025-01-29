/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:11:14 by rorollin          #+#    #+#             */
/*   Updated: 2024/11/23 17:29:17 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p_location;
	size_t			count;

	p_location = (unsigned char *) s;
	count = 0;
	while (count < n)
	{
		p_location[count] = (unsigned char) c;
		count++;
	}
	return (s);
}
