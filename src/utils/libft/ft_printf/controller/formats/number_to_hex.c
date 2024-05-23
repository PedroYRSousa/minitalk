/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:53:51 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/08/28 17:54:13 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "formats.h"

static char	*number_to_hex(unsigned long value)
{
	char	*text;
	char	digit;

	text = (char *)ft_calloc(1, sizeof(char));
	if (value == 0)
		text = add_digit(text, '0');
	else
	{
		while (value > 0)
		{
			digit = value % 16;
			if (digit >= 10 && digit <= 15)
				text = add_digit(text, digit + 87);
			else
				text = add_digit(text, digit + '0');
			value = value / 16;
		}
	}
	return (text);
}

char	*long_to_hex(unsigned long value)
{
	return (number_to_hex(value));
}

char	*int_to_hex(unsigned int value)
{
	return (number_to_hex(value));
}
