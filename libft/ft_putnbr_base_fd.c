/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:47:29 by rorollin          #+#    #+#             */
/*   Updated: 2025/01/15 16:57:46 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

size_t	ft_putnbr_base_fd(int fd, long long int n, char *base)
{
	int		size_base;
	size_t	bytes_written;

	bytes_written = 0;
	if (!ft_valid_base(base))
		return (bytes_written);
	size_base = ft_strlen(base);
	if (n == LLONG_MIN)
		return (ft_putnbr_base_fd(fd, (n & ~1) / size_base, base)
			+ ft_putchar_fd(base[(-(n + 1) % size_base) + 1], fd));
	if (n < 0)
	{
		bytes_written += ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n >= 0 && n <= size_base - 1)
		bytes_written += ft_putchar_fd(base[n], fd);
	else
	{
		bytes_written += ft_putnbr_base_fd(fd, n / size_base, base);
		n = (n % size_base);
		bytes_written += ft_putchar_fd(base[n], fd);
	}
	return (bytes_written);
}
