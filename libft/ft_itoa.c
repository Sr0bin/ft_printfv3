/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:16:11 by rorollin          #+#    #+#             */
/*   Updated: 2024/11/28 23:01:06 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	numberlen(int n, int base)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / base;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*new_string;

	len = numberlen(n, 10);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	new_string = ft_calloc(len + 1, sizeof(char));
	if (new_string == NULL)
		return (NULL);
	if (n == 0)
		new_string[0] = '0';
	if (n < 0)
	{
		new_string[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		new_string[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (new_string);
}
