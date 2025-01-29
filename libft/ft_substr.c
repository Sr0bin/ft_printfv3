/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:11:17 by rorollin          #+#    #+#             */
/*   Updated: 2024/11/28 22:56:03 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_string;
	size_t	counter;
	size_t	len_s;
	size_t	max_mem;

	new_string = NULL;
	counter = 0;
	len_s = ft_strlen(s);
	max_mem = len;
	if (len_s - start < len)
		max_mem = len_s - start;
	if (start > len_s)
		return (ft_calloc(sizeof(char), 1));
	new_string = ft_calloc((max_mem + 1), sizeof(char));
	if (new_string == NULL)
		return (NULL);
	while (s[counter] != '\0' && counter < len)
	{
		new_string[counter] = s[counter + start];
		counter++;
	}
	new_string[counter] = '\0';
	return (new_string);
}
