/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:24:23 by rorollin          #+#    #+#             */
/*   Updated: 2025/01/15 17:16:03 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft.h"

int		ft_printf(const char *str, ...) __attribute__ ((format(printf, 1, 2)));
size_t	ft_parser(char *str, va_list args);
size_t	ft_print_d(int fd, void *number);
size_t	ft_print_p(int fd, void *pointer);
size_t	ft_print_i(int fd, void *number);
size_t	ft_print_s(int fd, void *string);
size_t	ft_print_u(int fd, void *number);
size_t	ft_print_x(int fd, void *number);
size_t	ft_print_x_upper(int fd, void *number);
size_t	ft_print_c(int fd, void *character);
size_t	ft_format(char c, va_list args);
#endif 
