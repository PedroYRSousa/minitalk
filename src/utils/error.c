/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:28:40 by user42            #+#    #+#             */
/*   Updated: 2021/10/28 08:12:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*code_to_str(int code)
{
	if (code == ERROR_CODE_ENTRY_MALFORMAT)
		return ("Error! please use: [client exec] [pid server] [mensage]");
	if (code == ERROR_CODE_PID_INVALID)
		return ("Error! invalid PID.");
	return ("Error!");
}

void	error(int code)
{
	ft_printf(code_to_str(code));
	exit(1);
}
