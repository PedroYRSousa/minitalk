/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p_hexadecimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:53:58 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/08/28 17:54:10 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "formats.h"

void	print_p_hexadecimal(va_list ap, size_t *c)
{
	long	value;
	char	*text;

	text = "";
	value = va_arg(ap, long);
	text = long_to_hex(value);
	text = add_digit(text, 'x');
	text = add_digit(text, '0');
	*c = *c + ft_strlen(text);
	write(1, text, ft_strlen(text));
	free(text);
}
