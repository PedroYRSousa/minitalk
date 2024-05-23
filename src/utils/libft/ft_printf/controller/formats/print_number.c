/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:53:56 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/08/28 17:54:11 by pyago-ra         ###   ########.fr       */
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

static void	print(int value, size_t *c)
{
	unsigned int	u_value;

	if (value == 0)
	{
		write(1, "0", 1);
		*c = *c + 1;
		return ;
	}
	else if (value < 0)
	{
		write(1, "-", 1);
		*c = *c + 1;
		u_value = value * -1;
	}
	else
		u_value = value;
	print_digit(u_value, 1, c);
}

void	print_number(va_list ap, size_t *c)
{
	int	value;

	value = va_arg(ap, int);
	print(value, c);
}
