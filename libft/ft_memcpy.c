/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:06:22 by rorollin          #+#    #+#             */
/*   Updated: 2024/11/25 19:06:27 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t					counter;
	const unsigned char		*p_source;
	unsigned char			*p_dest;

	counter = 0;
	if (src == NULL && dest == NULL)
		return (NULL);
	p_source = src;
	p_dest = dest;
	while (counter < n)
	{
		p_dest[counter] = p_source[counter];
		counter++;
	}
	return (p_dest);
}
