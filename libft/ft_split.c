/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:23:15 by rorollin          #+#    #+#             */
/*   Updated: 2024/11/27 18:15:03 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	counter;
	size_t	flag;

	i = 0;
	counter = 0;
	flag = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && flag == 1)
			flag = 0;
		if (s[i] != c && flag == 0)
		{
			counter++;
			flag = 1;
		}
		i++;
	}
	return (counter);
}

static char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	size_t	len;
	char	*strdup;

	i = 0;
	len = ft_strlen(s);
	if (n < len)
		len = n;
	strdup = malloc(sizeof(char) * (len + 1));
	if (strdup == NULL)
		return (NULL);
	while (i < len && i < n)
	{
		strdup[i] = s[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}

static void	*free_array(void **array, size_t n)
{
	size_t	i;

	i = 0;
	while (i <= n)
		free(array[i++]);
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	*crt_char;
	char	**array;

	i = 0;
	j = 0;
	crt_char = (char *) &s[i];
	array = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (array == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if ((s[i] == c) && *crt_char != c)
			array[j++] = ft_strndup(crt_char, (&s[i] - crt_char));
		if ((s[i] != c && *crt_char == c) || (s[i] == c && *crt_char != c))
			crt_char = (char *)&s[i];
		if (s[i++ + 1] == '\0' && *crt_char != c)
			array[j++] = ft_strndup(crt_char, (&s[i] - crt_char));
		if (j > 0)
			if (array[j - 1] == NULL)
				return (free_array((void **) array, j - 1));
	}
	return (array);
}
