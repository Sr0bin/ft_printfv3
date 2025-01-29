/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:47:40 by rorollin          #+#    #+#             */
/*   Updated: 2024/11/23 17:13:18 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	const unsigned char	*p_source;

	p_dest = (unsigned char *) dest;
	p_source = (unsigned char *) src;
	if (p_dest > p_source)
	{
		while (n > 0)
		{
			p_dest[n - 1] = p_source[n - 1];
			n--;
		}
	}
	else
	{
		ft_memcpy(p_dest, p_source, n);
	}
	return (dest);
}
