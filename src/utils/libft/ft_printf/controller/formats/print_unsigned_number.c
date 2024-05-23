/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_number.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:54:03 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/08/28 17:54:09 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "formats.h"

static void	print_digit(unsigned int n, int fd, size_t *c)
{
	if (n > 0)
	{
		print_digit(n / 10, fd, c);
		*c = *c + 1;
		ft_putchar_fd((n % 10) + '0', fd);
	}
}

static void	print(unsigned int value, size_t *c)
{
	if (value == 0)
	{
		write(1, "0", 1);
		*c = *c + 1;
		return ;
	}
	print_digit(value, 1, c);
}

void	print_unsigned_number(va_list ap, size_t *c)
{
	unsigned int	value;

	value = va_arg(ap, unsigned int);
	print(value, c);
}
