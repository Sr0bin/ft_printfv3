/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:10:50 by rorollin          #+#    #+#             */
/*   Updated: 2024/11/22 16:13:47 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	const char		*current_char;
	unsigned char	character;

	i = 0;
	current_char = NULL;
	character = (unsigned char) c;
	while (s[i] != '\0')
	{
		if (s[i] == character)
			current_char = &s[i];
		i++;
	}
	if (character == '\0')
		current_char = &s[i];
	return ((char *) current_char);
}
