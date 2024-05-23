/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:53:32 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/08/28 17:53:35 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "format.h"

static int	is_format(const char target)
{
	size_t		index;
	const char	formats[] = {'c', 's', 'p', 'd', 'i', 'u', 'x', 'X', '%'};

	index = 0;
	while (index < FORMAT_COUNT)
	{
		if (target == formats[index])
			return (1);
		index++;
	}
	return (0);
}

void	get_format(t_controller *controller, size_t *index)
{
	if (is_format(controller->control[*index]))
	{
		controller->format = controller->control[*index];
		(*index)++;
	}
	else
		controller->to_abort = 1;
}
