/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:26:40 by user42            #+#    #+#             */
/*   Updated: 2021/11/04 09:08:18 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# ifndef _XOPEN_SOURCE
#  define _XOPEN_SOURCE 700
# endif

# include <signal.h>
# include <unistd.h>
# include "libft/libft.h"
# include "libft/ft_printf/ft_printf.h"

# ifndef ERROR_CODE_ENTRY_MALFORMAT
#  define ERROR_CODE_ENTRY_MALFORMAT 0x00
# endif

# ifndef ERROR_CODE_PID_INVALID
#  define ERROR_CODE_PID_INVALID 0x01
# endif

# ifndef BIT_1
#  define BIT_1 SIGUSR2
# endif

# ifndef BIT_0
#  define BIT_0 SIGUSR1
# endif

# ifndef CONFIRM
#  define CONFIRM BIT_1
# endif

void	error(int code);

#endif