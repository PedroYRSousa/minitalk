/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_caractere.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:53:54 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/08/28 17:54:12 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "formats.h"

void	print_caractere(va_list ap, size_t *c)
{
	*c = *c + 1;
	ft_putchar_fd(va_arg(ap, int), 1);
}
