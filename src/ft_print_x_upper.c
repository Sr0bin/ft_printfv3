/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 17:22:46 by rorollin          #+#    #+#             */
/*   Updated: 2025/01/15 17:06:56 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_x_upper(int fd, void *number)
{
	return (ft_putnbr_base_fd(fd, *(uint *) &number, "0123456789ABCDEF"));
}
