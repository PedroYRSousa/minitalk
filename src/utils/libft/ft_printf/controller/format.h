/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:53:34 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/26 08:39:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMAT_H
# define FORMAT_H

# ifndef FORMAT_COUNT
#  define FORMAT_COUNT 9
# endif

# include "controller.h"
# include "../../libft.h"

void	get_format(t_controller *controller, size_t *index);

#endif