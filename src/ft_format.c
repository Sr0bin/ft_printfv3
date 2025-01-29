/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 20:20:01 by rorollin          #+#    #+#             */
/*   Updated: 2025/01/20 15:17:32 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_format(char c, va_list args)
{
	int	fd;

	fd = 1;
	if (c == 'c')
		return (ft_print_c(fd, (void *) va_arg(args, int *)));
	if (c == 's')
		return (ft_print_s(fd, (void *) va_arg(args, char **)));
	if (c == 'd')
		return (ft_print_d(fd, (void *) va_arg(args, int *)));
	if (c == 'i')
		return (ft_print_i(fd, (void *) va_arg(args, int *)));
	if (c == 'p')
		return (ft_print_p(fd, (void *) va_arg(args, void *)));
	if (c == 'u')
		return (ft_print_u(fd, (void *) va_arg(args, uint *)));
	if (c == 'x')
		return (ft_print_x(fd, (void *) va_arg(args, int *)));
	if (c == 'X')
		return (ft_print_x_upper(fd, (void *) va_arg(args, int *)));
	if (c == '%')
		return (ft_putchar_fd('%', fd));
	return (0);
}
