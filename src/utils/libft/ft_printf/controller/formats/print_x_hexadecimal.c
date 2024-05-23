/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x_hexadecimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:54:07 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/08/28 17:54:08 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "formats.h"

void	print_x_hexadecimal(va_list ap, size_t *c)
{
	long	value;
	char	*text;

	text = "";
	value = va_arg(ap, long);
	text = int_to_hex(value);
	*c = *c + ft_strlen(text);
	write(1, text, ft_strlen(text));
	free(text);
}
