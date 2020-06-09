/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 13:16:44 by abarthel          #+#    #+#             */
/*   Updated: 2020/06/09 19:35:33 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "select.h"

void	display_selection(struct s_select *data)
{
	struct	s_element	*e;
	int	has_prev;

	has_prev = 0;
	e = data->elements;
	while (e)
	{
		if (!has_prev && e->selected)
		{
			has_prev = 1;
			ft_printf("%s", e->arg);
		}
		else if (has_prev && e->selected)
			ft_printf(" %s", e->arg);
		e = e->next;
	}
}
