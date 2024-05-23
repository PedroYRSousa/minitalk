/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_upper_hexadecimal.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:54:06 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/08/28 17:54:08 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "formats.h"

char	*to_upper(char *text)
{
	size_t	index;
	size_t	size;

	index = 0;
	size = ft_strlen(text);
	while (index < size)
	{
		if (text[index] >= 'a' && text[index] <= 'f')
			text[index] = text[index] - 32;
		index++;
	}
	return (text);
}

void	print_upper_hexadecimal(va_list ap, size_t *c)
{
	long			value;
	char			*text;

	text = "";
	value = va_arg(ap, long);
	text = int_to_hex(value);
	text = to_upper(text);
	*c = *c + ft_strlen(text);
	write(1, text, ft_strlen(text));
	free(text);
}
