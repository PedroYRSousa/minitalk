/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formats.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:53:47 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/26 08:40:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMATS_H
# define FORMATS_H

# include <stdarg.h>
# include <unistd.h>
# include "../../../libft.h"

void	print_string(va_list ap, size_t *c);
void	print_number(va_list ap, size_t *c);
void	print_caractere(va_list ap, size_t *c);
void	print_p_hexadecimal(va_list ap, size_t *c);
void	print_x_hexadecimal(va_list ap, size_t *c);
void	print_upper_hexadecimal(va_list ap, size_t *c);
void	print_unsigned_number(va_list ap, size_t *c);
char	*add_digit(char *text, char digit);
char	*long_long_to_hex(unsigned long long value);
char	*long_to_hex(unsigned long value);
char	*int_to_hex(unsigned int value);

#endif