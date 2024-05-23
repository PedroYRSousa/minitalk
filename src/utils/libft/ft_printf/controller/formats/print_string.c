/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:54:01 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/08/28 17:54:10 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "formats.h"

void	print_string(va_list ap, size_t *c)
{
	char	*value;

	value = va_arg(ap, char *);
	if (value == NULL)
		value = "(null)";
	*c = *c + ft_strlen(value);
	ft_putstr_fd(value, 1);
}
