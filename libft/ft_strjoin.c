/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:09:01 by rorollin          #+#    #+#             */
/*   Updated: 2025/01/13 18:37:54 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	counter;
	size_t	len_s1;

	new_string = NULL;
	counter = 0;
	len_s1 = ft_strlen(s1);
	new_string = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (new_string == NULL)
		return (NULL);
	while (s1[counter])
	{
		new_string[counter] = s1[counter];
		counter++;
	}
	counter = 0;
	while (s2[counter])
	{
		new_string[len_s1 + counter] = s2[counter];
		counter++;
	}
	new_string[len_s1 + counter] = '\0';
	return (new_string);
}
