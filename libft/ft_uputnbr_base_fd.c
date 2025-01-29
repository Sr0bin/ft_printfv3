/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr_base_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:09:40 by rorollin          #+#    #+#             */
/*   Updated: 2025/01/15 16:58:11 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_uputnbr_base_fd(int fd, unsigned long long int n, char *base)
{
	int		size_base;
	size_t	bytes_written;

	bytes_written = 0;
	if (!ft_valid_base(base))
		return (bytes_written);
	size_base = ft_strlen(base);
	if (n <= (unsigned long) size_base - 1)
		bytes_written += ft_putchar_fd(base[n], fd);
	else
	{
		bytes_written += ft_putnbr_base_fd(fd, n / size_base, base);
		n = (n % size_base);
		bytes_written += ft_putchar_fd(base[n], fd);
	}
	return (bytes_written);
}
