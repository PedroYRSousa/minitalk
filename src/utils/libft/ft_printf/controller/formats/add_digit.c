/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_digit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:53:43 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/26 08:40:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "formats.h"

char	*add_digit(char *text, char digit)
{
	char	*new_text;
	size_t	index_new;
	size_t	index_text;
	size_t	size_text;

	size_text = ft_strlen(text);
	new_text = (char *)ft_calloc(size_text + 2, sizeof(char));
	new_text[0] = digit;
	index_new = 1;
	index_text = 0;
	while (index_text < size_text)
	{
		new_text[index_new] = text[index_text];
		index_new++;
		index_text++;
	}
	free(text);
	return (new_text);
}
