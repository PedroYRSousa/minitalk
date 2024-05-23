/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controller.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:53:22 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/08/28 17:53:23 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "controller.h"
#include <stdio.h>

void	print_controller(t_controller *controller, va_list ap, size_t *c)
{
	if (controller->format == '%')
	{
		write(1, "%", 1);
		*c = *c + 1;
	}
	else if (controller->format == 'c')
		print_caractere(ap, c);
	else if (controller->format == 's')
		print_string(ap, c);
	else if (controller->format == 'd')
		print_number(ap, c);
	else if (controller->format == 'i')
		print_number(ap, c);
	else if (controller->format == 'u')
		print_unsigned_number(ap, c);
	else if (controller->format == 'p')
		print_p_hexadecimal(ap, c);
	else if (controller->format == 'x')
		print_x_hexadecimal(ap, c);
	else if (controller->format == 'X')
		print_upper_hexadecimal(ap, c);
}

t_controller	new_controller(const char *control)
{
	t_controller	controller;

	controller.can_left_justify = 0;
	controller.can_show_signal = 0;
	controller.can_show_prefix = 0;
	controller.can_fill_space = 0;
	controller.can_fill_zero = 0;
	controller.to_abort = 0;
	controller.control = control;
	controller.format = '%';
	controller.text = NULL;
	controller.size = 0;
	controller.width = 0;
	controller.precision = 0;
	return (controller);
}
