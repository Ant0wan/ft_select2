/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_suite.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 14:03:05 by abarthel          #+#    #+#             */
/*   Updated: 2020/05/18 15:28:09 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

int	ismetachar(union u_buffer c)
{
	return (c.buf[0] == 27 && c.buf[1] != 0);
}

int	isprintchr(int c)
{
	return (c >= 32 && c <= 126);
}

int	isstdkey(int c)
{
	return (c > 0 && c <= 127);
}

int	isctrlkey(union u_buffer c)
{
	return (c.buf[0] == 27 && c.buf[1] == 91);
}
