/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:18:03 by rorollin          #+#    #+#             */
/*   Updated: 2024/11/28 22:58:23 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	size_t	total_bytes;

	result = NULL;
	total_bytes = nmemb * size;
	if (total_bytes > INT_MAX)
		return (result);
	result = malloc(total_bytes);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, total_bytes);
	return (result);
}
