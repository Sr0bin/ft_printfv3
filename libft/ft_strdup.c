/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:30:50 by rorollin          #+#    #+#             */
/*   Updated: 2024/11/23 18:42:19 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*strdup;

	i = 0;
	len = ft_strlen(s);
	strdup = malloc(sizeof(char) * (len + 1));
	if (strdup == NULL)
		return (NULL);
	while (i <= len)
	{
		strdup[i] = s[i];
		i++;
	}
	return (strdup);
}
