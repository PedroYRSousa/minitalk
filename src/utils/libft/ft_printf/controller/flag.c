/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:53:27 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/08/28 17:53:36 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flag.h"

static void	get_width(t_controller *controller, size_t *index)
{
	while (ft_isdigit(controller->control[*index]))
	{
		controller->width *= 10;
		controller->width += controller->control[*index] - '0';
		*index = *index + 1;
	}
}

static void	get_precision(t_controller *controller, size_t *index)
{
	while (ft_isdigit(controller->control[*index]))
	{
		controller->precision *= 10;
		controller->precision += controller->control[*index] - '0';
		*index = *index + 1;
	}
}

static void	set_info(t_controller *controller, size_t *index)
{
	char	flag;

	flag = controller->control[*index];
	if (flag == '-')
		controller->can_left_justify = 1;
	else if (flag == '+')
		controller->can_show_signal = 1;
	else if (flag == '#')
		controller->can_show_prefix = 1;
	else if (flag == ' ')
		controller->can_fill_space = 1;
	else if (flag == '.')
		get_precision(controller, ++index);
	else if (flag == '0')
		controller->can_fill_zero = 1;
	else
		get_width(controller, index);
}

static int	is_flag(const char target)
{
	size_t		index;
	const char	flags[] = {'-', '+', '#', ' ', '.', '0'};

	index = 0;
	while (index < FLAG_COUNT)
	{
		if (target == flags[index] && ft_isdigit(target))
			return (1);
		index++;
	}
	return (0);
}

void	get_flag(t_controller *controller, size_t *index)
{
	while (is_flag(controller->control[*index]))
	{
		set_info(controller, index);
		*index = *index + 1;
	}
}
