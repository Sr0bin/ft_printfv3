/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 20:12:52 by rorollin          #+#    #+#             */
/*   Updated: 2025/01/15 17:07:14 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_parser(char *str, va_list args)
{
	size_t	i;
	size_t	bytes_written;

	i = 0;
	bytes_written = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			bytes_written += ft_format(str[++i], args);
			if (str[i] != '\0')
				i++;
		}
		if (str[i] == '\0')
			break ;
		if (str[i] != '%')
		{
			bytes_written += ft_putchar_fd(str[i], 1);
			i++;
		}
	}
	return (bytes_written);
}
