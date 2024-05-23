/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:52:10 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/08/28 17:52:11 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned char	is_control(const char target)
{
	return (target == CONTROL);
}

static void	print_rest(const char *target, const size_t size, size_t *c)
{
	*c = *c + size;
	if (size > 0)
		write(1, target, size);
}

static void	print_control(const char *control, size_t *i, va_list ap, size_t *c)
{
	t_controller	controller;

	(*i)++;
	controller = new_controller(control);
	get_format(&controller, i);
	print_controller(&controller, ap, c);
}

static int	print(const char *str, size_t start, size_t size, va_list ap)
{
	size_t	index;
	size_t	count;

	index = 0;
	count = 0;
	while ((str != NULL) && (str[index] != 0))
	{
		if (is_control(str[index]))
		{
			print_rest(&str[start], size, &count);
			print_control(&str[0], &index, ap, &count);
			start = index;
			size = 0;
			continue ;
		}
		index++;
		size++;
	}
	print_rest(&str[start], size, &count);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	size_t	start;
	size_t	size;
	size_t	count;
	va_list	ap;

	start = 0;
	size = 0;
	va_start(ap, str);
	count = print(str, start, size, ap);
	va_end(ap);
	return (count);
}
