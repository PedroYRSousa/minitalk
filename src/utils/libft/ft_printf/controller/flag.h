/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:53:29 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/26 08:39:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAG_H
# define FLAG_H

# ifndef FLAG_COUNT
#  define FLAG_COUNT 6
# endif

# include "controller.h"
# include "../../libft.h"

void	get_flag(t_controller *controller, size_t *index);

#endif