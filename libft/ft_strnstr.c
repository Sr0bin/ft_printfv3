/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:07:17 by rorollin          #+#    #+#             */
/*   Updated: 2025/01/13 18:22:05 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*current_char;

	i = 0;
	current_char = NULL;
	if (little[0] == '\0')
		return ((char *) big);
	while (big[i] != '\0')
	{
		j = 0;
		current_char = (char *) &big[i];
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (big[i + j] == '\0' && little[j] == '\0')
				return (current_char);
			j++;
		}
		if (little[j] == '\0')
			return (current_char);
		i++;
	}
	return (NULL);
}
