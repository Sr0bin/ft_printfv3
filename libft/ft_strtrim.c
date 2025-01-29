/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:12:26 by rorollin          #+#    #+#             */
/*   Updated: 2024/11/28 20:44:34 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	min_n;
	size_t	max_n;
	size_t	max_temp;

	i = 0;
	min_n = 0;
	max_n = ft_strlen(s1);
	max_temp = max_n;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		min_n = ++i;
	while (s1[i] != '\0')
	{
		if (ft_strchr(set, s1[i]) != NULL)
		{
			max_temp = i;
			while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
				i++;
			if (s1[i--] == '\0')
				max_n = max_temp;
		}
		i++;
	}
	return (ft_substr(s1, min_n, max_n - min_n));
}
